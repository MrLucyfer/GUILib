cmake_minimum_required(VERSION 3.21)
project(GUI)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 CONFIG REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(LibGui LibGfx)
add_subdirectory(LibGfx)
add_subdirectory(LibGui)

add_executable(GUI main.cpp)

target_link_libraries(GUI PRIVATE SDL2::SDL2 SDL2::SDL2main LibGui)
