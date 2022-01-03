set(SOURCES
        Application.cpp
        Widget.cpp
        Button.cpp
        Label.cpp)

add_library(LibGui STATIC ${SOURCES})
include_directories(../LibGfx)
target_link_libraries(LibGui LibGfx)