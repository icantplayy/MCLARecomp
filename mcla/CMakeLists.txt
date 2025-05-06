cmake_minimum_required(VERSION 3.22)

project("mcla_recomp")

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
    main.cpp
    imports.cpp
    game_window.cpp
)

add_executable(mcla ${MCLA_SRC})

target_include_directories(mcla PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(mcla PUBLIC
    libmcla
    SDL3-static
)

if (WIN32)
    target_link_libraries(mcla PUBLIC
        d3d11
    )
endif()

target_precompile_headers(mcla PUBLIC stdafx.h)