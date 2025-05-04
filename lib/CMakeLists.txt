cmake_minimum_required(VERSION 3.22)

project("mcla_recomp_lib")

file(GLOB_RECURSE SRCS CMAKE_CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/ppc/*.cpp)

add_compile_options(
    -ferror-limit=0 -Wno-deprecated -O2 -mssse3 -msse4.1 -mavx
)

add_library(libmcla SHARED ${SRCS})
target_include_directories(libmcla PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(libmcla PUBLIC ppc/ppc_recomp_shared.h)