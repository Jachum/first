cmake_minimum_required(VERSION 3.12)
set(PROJECT_NAME Arkanoid1)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/testowyLinuxGcc.cpp src/Game.cpp src/GameObjectInterface.cpp src/Pad.cpp src/Position.cpp src/gfxInterface.hpp src/gfxNcurses.cpp src/gfxNcurses.hpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
#add_subdirectory(src)
#include_directories(src)

set(LIBS ncurses)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${LIBS})