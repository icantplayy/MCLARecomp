cmake_minimum_required(VERSION 3.22)

project("mcla_recomp_lib")

add_compile_options(
    -fno-strict-aliasing
)

if (WIN32)
    add_compile_options(/fp:strict)
else()
    add_compile_options(-ffp-model=strict)
endif()

file(GLOB_RECURSE SRCS CMAKE_CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/ppc/*.cpp)

add_executable(mcla ${SRCS})
target_include_directories(mcla PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(mcla PUBLIC ppc/ppc_recomp_shared.h)