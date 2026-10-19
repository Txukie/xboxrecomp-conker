cmake_minimum_required(VERSION 3.20)
project(conker_recomp C)

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

# ── Host code check that needs no generated code ───────────────────────
# Compiles main.c / recomp_manual.c / the host layer against the current
# runtime headers so API drift shows up even before regeneration.
add_library(conker_host_check OBJECT
    src/main.c
    src/recomp_manual.c
    ${CONKER_HOST_SOURCES}
)
target_include_directories(conker_host_check PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${XBOXRECOMP_DIR}/templates/runtime"
    "${XBOXRECOMP_DIR}/include"
)
target_link_libraries(conker_host_check PRIVATE xboxrecomp)
