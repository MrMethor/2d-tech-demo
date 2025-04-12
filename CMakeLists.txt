cmake_minimum_required(VERSION 3.30)
project(Game)

set(CMAKE_CXX_STANDARD 20)

set(SFML_ROOT "${CMAKE_SOURCE_DIR}/SFML")

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

include_directories(${SFML_ROOT}/include)

link_directories(${SFML_ROOT}/lib)

file(GLOB_RECURSE SOURCES
        ${CMAKE_SOURCE_DIR}/src/*.cpp
)

add_executable(Game ${SOURCES})

add_definitions(-DRESOURCE_DIR="${CMAKE_SOURCE_DIR}")

set_target_properties(Game PROPERTIES WIN32_EXECUTABLE TRUE)

target_link_libraries(Game
        sfml-graphics-s
        sfml-window-s
        sfml-system-s
        opengl32
        freetype
        winmm
        gdi32
)

add_definitions(-DSFML_STATIC)