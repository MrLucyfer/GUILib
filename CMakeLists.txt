cmake_minimum_required(VERSION 3.21)
project(App)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 CONFIG REQUIRED)
find_package(sdl2-ttf CONFIG REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${sdl2-ttf_INCLUDE_DIRS})
include_directories(LibGui LibGfx)

add_executable(App main.cpp)

add_subdirectory(LibGfx)
add_subdirectory(LibGui)
target_link_libraries(App PRIVATE SDL2::SDL2 SDL2::SDL2main SDL2::SDL2_ttf LibGui)
