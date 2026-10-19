# xbox_gfx - host GPU abstraction under the NV2A PGRAPH translator.
#
# Backends are compiled in by option; xbox_gfx_init() picks one at runtime
# ($XBOX_GFX_BACKEND = vulkan | metal | d3d8compat | null, default auto).

find_package(Vulkan QUIET)
# Windowed backends use SDL2 for the window/surface. Windows builds did not
# need SDL2 before, so Vulkan only defaults on when both are present.
find_package(SDL2 QUIET)
if(Vulkan_FOUND AND SDL2_FOUND)
    set(_gfx_vulkan_default ON)
else()
    set(_gfx_vulkan_default OFF)
endif()

option(XBOXRECOMP_GFX_VULKAN "Build the Vulkan backend" ${_gfx_vulkan_default})
option(XBOXRECOMP_GFX_METAL "Build the Metal backend (macOS)" ${APPLE})
option(XBOXRECOMP_GFX_D3D8COMPAT "Build the legacy xbox_d3d8 backend" ON)

add_library(xbox_gfx STATIC
    gfx_core.c
    gfx_null.c
)
target_include_directories(xbox_gfx PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(xbox_gfx PRIVATE platform)

if(XBOXRECOMP_GFX_D3D8COMPAT)
    target_sources(xbox_gfx PRIVATE gfx_d3d8compat.c)
    target_compile_definitions(xbox_gfx PRIVATE XBOX_GFX_HAVE_D3D8COMPAT)
    target_link_libraries(xbox_gfx PUBLIC xbox_d3d8)
endif()

if(XBOXRECOMP_GFX_VULKAN OR XBOXRECOMP_GFX_METAL)
    find_package(SDL2 REQUIRED)
    target_link_libraries(xbox_gfx PUBLIC SDL2::SDL2)
endif()

if(XBOXRECOMP_GFX_VULKAN)
    if(NOT Vulkan_FOUND)
        message(FATAL_ERROR "XBOXRECOMP_GFX_VULKAN=ON but the Vulkan SDK/loader was not found")
    endif()
    target_sources(xbox_gfx PRIVATE gfx_vulkan.c)
    target_compile_definitions(xbox_gfx PRIVATE XBOX_GFX_HAVE_VULKAN)
    target_link_libraries(xbox_gfx PUBLIC Vulkan::Vulkan)
endif()

if(XBOXRECOMP_GFX_METAL)
    enable_language(OBJC)
    target_sources(xbox_gfx PRIVATE gfx_metal.m)
    set_source_files_properties(gfx_metal.m PROPERTIES COMPILE_FLAGS "-fobjc-arc")
    target_compile_definitions(xbox_gfx PRIVATE XBOX_GFX_HAVE_METAL)
    target_link_libraries(xbox_gfx PUBLIC "-framework Metal" "-framework QuartzCore")
endif()

if(MSVC)
    target_compile_options(xbox_gfx PRIVATE /W3)
else()
    target_compile_options(xbox_gfx PRIVATE -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -O2)
endif()

message(STATUS "xbox_gfx backends: null")
if(XBOXRECOMP_GFX_D3D8COMPAT)
    message(STATUS "  + d3d8compat")
endif()
if(XBOXRECOMP_GFX_VULKAN)
    message(STATUS "  + vulkan")
endif()
if(XBOXRECOMP_GFX_METAL)
    message(STATUS "  + metal")
endif()

# Headless render test (exit 77 = backend unavailable, reported as skipped).
add_executable(xbox_gfx_render_test tests/gfx_render_test.c)
target_link_libraries(xbox_gfx_render_test PRIVATE xbox_gfx)
if(XBOXRECOMP_GFX_VULKAN)
    add_test(NAME gfx_render_vulkan COMMAND xbox_gfx_render_test vulkan)
    set_tests_properties(gfx_render_vulkan PROPERTIES SKIP_RETURN_CODE 77)
endif()
