cmake_minimum_required(VERSION 3.20)
# The release version: the AppImage is named after it, and the executable
# prints it.
project(conker_recomp VERSION 0.2.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Before add_subdirectory so the subprojects' tests register too.
enable_testing()

# ── xboxrecomp toolkit (git submodule, pinned to a release) ─────────────
get_filename_component(_xboxrecomp_default
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../external/xboxrecomp" ABSOLUTE)
set(XBOXRECOMP_DIR "${_xboxrecomp_default}" CACHE PATH
    "Path to the xboxrecomp toolkit root directory")
if(NOT EXISTS "${XBOXRECOMP_DIR}/CMakeLists.txt")
    message(FATAL_ERROR
        "xboxrecomp not found at ${XBOXRECOMP_DIR}.\n"
        "Run: git submodule update --init external/xboxrecomp")
endif()
# Fixes to the toolkit that Conker needs and upstream does not have yet
# (work/conker/patches/xboxrecomp, each to be sent upstream). Applied to the
# submodule's working tree once; a patch already in place is skipped.
find_package(Git QUIET)
file(GLOB _xboxrecomp_patches
    "${CMAKE_CURRENT_SOURCE_DIR}/../patches/xboxrecomp/*.patch")
list(SORT _xboxrecomp_patches)
# The series goes on in order, so the newest patch already in place says
# everything before it is too: only the ones after it are applied. (Checking
# each patch alone fails once a later one changed the lines around it.)
set(_xboxrecomp_reversed ${_xboxrecomp_patches})
list(REVERSE _xboxrecomp_reversed)
set(_xboxrecomp_todo)
foreach(_patch IN LISTS _xboxrecomp_reversed)
    if(NOT GIT_FOUND)
        break()
    endif()
    execute_process(
        COMMAND "${GIT_EXECUTABLE}" apply --reverse --check "${_patch}"
        WORKING_DIRECTORY "${XBOXRECOMP_DIR}"
        RESULT_VARIABLE _already OUTPUT_QUIET ERROR_QUIET)
    if(_already EQUAL 0)
        break()
    endif()
    list(PREPEND _xboxrecomp_todo "${_patch}")
endforeach()
if(GIT_FOUND)
    set(_xboxrecomp_patches ${_xboxrecomp_todo})
endif()
foreach(_patch IN LISTS _xboxrecomp_patches)
    get_filename_component(_patch_name "${_patch}" NAME)
    if(NOT GIT_FOUND)
        message(WARNING "git not found; cannot check ${_patch_name}")
        continue()
    endif()
    execute_process(
        COMMAND "${GIT_EXECUTABLE}" apply --reverse --check "${_patch}"
        WORKING_DIRECTORY "${XBOXRECOMP_DIR}"
        RESULT_VARIABLE _already OUTPUT_QUIET ERROR_QUIET)
    if(_already EQUAL 0)
        continue()
    endif()
    execute_process(
        COMMAND "${GIT_EXECUTABLE}" apply "${_patch}"
        WORKING_DIRECTORY "${XBOXRECOMP_DIR}"
        RESULT_VARIABLE _applied ERROR_VARIABLE _apply_err)
    if(_applied EQUAL 0)
        message(STATUS "xboxrecomp: applied ${_patch_name}")
    else()
        message(FATAL_ERROR
            "xboxrecomp: ${_patch_name} does not apply (submodule moved?):\n${_apply_err}")
    endif()
endforeach()

add_subdirectory("${XBOXRECOMP_DIR}" "${CMAKE_BINARY_DIR}/xboxrecomp")

# ── Host graphics backends (Vulkan / Metal / legacy D3D8 / null) ────────
add_subdirectory(gfx)

# ── Recompiled game ─────────────────────────────────────────────────────
#
# The generated C should come from the same toolkit version as the runtime.
# The code in src/recomp/gen predates v0.15 (it takes its macros from the
# toolkit's recomp_types.h, so it still compiles, but it lacks the flat
# dispatch table and the newer lifter's fixes). Until it is regenerated
# (work/conker/README.md, "Regenerar el código") it builds with a small shim.
file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen/*.c")

set(_dispatch "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen/recomp_dispatch.c")
set(_gen_current OFF)
if(EXISTS "${_dispatch}")
    file(STRINGS "${_dispatch}" _dispatch_init_line REGEX "recomp_dispatch_init")
    if(_dispatch_init_line)
        set(_gen_current ON)
    endif()
endif()
option(CONKER_BUILD_GAME "Build the conker_recomp executable" ON)

if(WIN32)
    set(CONKER_HOST_SOURCES src/host_win32.c)
else()
    set(CONKER_HOST_SOURCES src/host_posix.c)
endif()

if(CONKER_BUILD_GAME)
    add_executable(conker_recomp
        src/main.c
        src/recomp_manual.c
        src/conker_menu.c
        src/conker_settings.c
        src/conker_install.c
        src/conker_mods.c
        ${CONKER_HOST_SOURCES}
        ${RECOMP_GEN_SOURCES}
    )
    if(NOT _gen_current)
        target_sources(conker_recomp PRIVATE src/legacy_dispatch.c)
        message(WARNING
            "src/recomp/gen comes from a pre-v0.15 xboxrecomp generator; "
            "building it with src/legacy_dispatch.c. Regenerate it with "
            "external/xboxrecomp/tools (work/conker/README.md).")
    endif()

    target_include_directories(conker_recomp PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen"
        "${XBOXRECOMP_DIR}/templates/runtime"
        "${XBOXRECOMP_DIR}/include"
    )

    target_link_libraries(conker_recomp PRIVATE xboxrecomp xbox_gfx)
    # The GPU renderer (RECOMP_RENDERER=vulkan), when the toolkit built it.
    if(TARGET xbox_nv2a_vk)
        target_link_libraries(conker_recomp PRIVATE xbox_nv2a_vk)
        target_compile_definitions(conker_recomp PRIVATE CONKER_HAVE_VULKAN=1)
    endif()
    target_compile_definitions(conker_recomp PRIVATE
        CONKER_VERSION="${PROJECT_VERSION}")

    if(WIN32)
        target_compile_definitions(conker_recomp PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
        target_link_libraries(conker_recomp PRIVATE
            d3d11 dxgi dxguid winmm shell32 dbghelp
            $<IF:$<BOOL:${MINGW}>,xinput1_4,xinput>)
    else()
        # dladdr/backtrace for crash reports; -rdynamic gives them the names
        # of the generated functions (sub_XXXXXXXX = guest address).
        target_link_libraries(conker_recomp PRIVATE ${CMAKE_DL_LIBS})
        if(NOT APPLE)
            target_link_options(conker_recomp PRIVATE -rdynamic)
        endif()
    endif()

    if(MSVC)
        target_compile_options(conker_recomp PRIVATE /bigobj /w)
        target_link_options(conker_recomp PRIVATE /LARGEADDRESSAWARE /MAP)
    else()
        # Lifted code reinterprets guest memory through pointer casts.
        target_compile_options(conker_recomp PRIVATE -w -fno-strict-aliasing -fwrapv)
    endif()

    set_target_properties(conker_recomp PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
endif()

# ── First-launch setup window (Qt 6) ───────────────────────────────────
# conker-setup asks for the player's disc and installs it
# (src/conker_install.c); the game runs it from beside itself when it finds
# no game files. Without Qt the game asks through zenity/kdialog instead.
include(CheckLanguage)
if(NOT WIN32)
    check_language(CXX)
endif()
if(NOT WIN32 AND CMAKE_CXX_COMPILER)
    enable_language(CXX)
    find_package(Qt6 QUIET COMPONENTS Widgets)
    if(Qt6_FOUND)
        set(CMAKE_AUTORCC ON)
        add_executable(conker-setup
            src/setup/conker_setup.cpp src/setup/setup.qrc src/conker_install.c)
        target_link_libraries(conker-setup PRIVATE Qt6::Widgets)
        set_target_properties(conker-setup PROPERTIES
            CXX_STANDARD 17
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
        message(STATUS "conker-setup: Qt ${Qt6_VERSION}")
    else()
        message(STATUS "conker-setup: no Qt 6 Widgets, not built")
    endif()
endif()

# ── AppImage (Linux) ───────────────────────────────────────────────────
# `cmake --build <build> --target appimage` packs the executable into
# CONKER_APPIMAGE_DIR/Conker-Recomp-<version>-x86_64.AppImage (by default
# appimage/ at the repository root, git-ignored; ../packaging/appimage).
# Build it from a Release build; the game data is never included.
if(TARGET conker_recomp AND CMAKE_SYSTEM_NAME STREQUAL "Linux")
    get_filename_component(_appimage_default
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../appimage" ABSOLUTE)
    set(CONKER_APPIMAGE_DIR "${_appimage_default}" CACHE PATH
        "Where the appimage target writes the AppImage")
    set(_setup_file "")
    set(_setup_dep "")
    if(TARGET conker-setup)
        set(_setup_file "$<TARGET_FILE:conker-setup>")
        set(_setup_dep conker-setup)
    endif()
    add_custom_target(appimage
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${CONKER_APPIMAGE_DIR}"
        COMMAND sh "${CMAKE_CURRENT_SOURCE_DIR}/../packaging/appimage/build-appimage.sh"
                "$<TARGET_FILE:conker_recomp>" "${CMAKE_BINARY_DIR}/appimage"
                "${CONKER_APPIMAGE_DIR}" "${PROJECT_VERSION}"
                "${_setup_file}"
        DEPENDS conker_recomp ${_setup_dep}
        COMMENT "Packing Conker-Recomp-${PROJECT_VERSION}-x86_64.AppImage"
        VERBATIM)
endif()

# ── Host code check that needs no generated code ───────────────────────
# Compiles main.c / recomp_manual.c / the host layer against the current
# runtime headers so API drift shows up even before regeneration.
add_library(conker_host_check OBJECT
    src/main.c
    src/recomp_manual.c
    src/conker_menu.c
    src/conker_settings.c
    src/conker_install.c
    src/conker_mods.c
    ${CONKER_HOST_SOURCES}
)
target_include_directories(conker_host_check PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${XBOXRECOMP_DIR}/templates/runtime"
    "${XBOXRECOMP_DIR}/include"
)
target_link_libraries(conker_host_check PRIVATE xboxrecomp)
