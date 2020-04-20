cmake_minimum_required(VERSION 3.16)
project(collectaballs)

set(CMAKE_CXX_STANDARD 20)

add_executable(collectaballs main.cpp Game.cpp Game.h Player.cpp Player.h Ball.cpp Ball.h)

add_subdirectory(include/SFML)

target_link_libraries(
        collectaballs
        PUBLIC
        sfml-graphics sfml-window sfml-system
)

target_include_directories(collectaballs PRIVATE)