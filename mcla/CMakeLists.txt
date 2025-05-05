cmake_minimum_required(VERSION 3.22)

project("mcla_recomp")

set(INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}../lib
    ${CMAKE_CURRENT_SOURCE_DIR}../tools/XenonRecomp/XenonUtils
)

add_compile_options(
    -fno-strict-aliasing
    -Wno-switch
    -Wno-unused-function
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -Wno-void-pointer-to-int-cast
    -Wno-int-to-void-pointer-cast
    -Wno-invalid-offsetof
    -Wno-null-arithmetic
    -Wno-null-conversion
    -Wno-tautological-undefined-compare
)

set(MCLA_SRC
    imports.cpp
    main.cpp
)

add_executable(mcla ${MCLA_SRC})
target_include_directories(mcla PUBLIC ${INCLUDE_DIRECTORIES})
target_link_libraries(mcla PUBLIC libmcla)
target_precompile_headers(mcla PUBLIC stdafx.h)