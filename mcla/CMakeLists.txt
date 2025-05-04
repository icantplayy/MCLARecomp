cmake_minimum_required(VERSION 3.22)

project("mcla_recomp")

set(INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}../lib
    ${CMAKE_CURRENT_SOURCE_DIR}../tools/XenonRecomp/XenonUtils
)

add_compile_options(
    -ferror-limit=0 -Wno-deprecated -O2 -mssse3 -msse4.1 -mavx
)

set(MCLA_SRC
    main.cpp
)

add_executable(mcla ${MCLA_SRC})
target_include_directories(mcla PUBLIC ${INCLUDE_DIRECTORIES})
target_link_libraries(mcla PUBLIC libmcla)
target_precompile_headers(mcla PUBLIC stdafx.h)