//
// Created by janek on 18.11.18.
//

#include "gfxNcurses.hpp"
#include <ncurses.h>

void gfxNcurses::init() {
    initscr();
    keypad(stdscr, true); //true means getch() will return key instead of just error_num
    getmaxyx(stdscr,maxY,maxX);
    return;
}

void gfxNcurses::shutdown() {
    return;
}

void gfxNcurses::draw() {
    return;
}

int gfxNcurses::getMaxY() const {
    return maxY;
}

int gfxNcurses::getMaxX() const {
    return maxX;
}

