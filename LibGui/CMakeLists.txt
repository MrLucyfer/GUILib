set(SOURCES
        Application.cpp)

add_library(LibGui STATIC ${SOURCES})
target_link_libraries(LibGui LibGfx)