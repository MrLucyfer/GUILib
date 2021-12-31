set(SOURCES
        Log.cpp)

find_package(spdlog CONFIG REQUIRED)

add_library(LibUtils STATIC ${SOURCES})

include_directories(${spdlog_INCLUDE_DIRS})
target_link_libraries(LibUtils PRIVATE spdlog::spdlog)