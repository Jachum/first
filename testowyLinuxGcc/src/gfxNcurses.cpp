//
// Created by janek on 18.11.18.
//

#include "gfxNcurses.hpp"
#include <ncurses.h>


void gfxNcurses::init() {
    initscr();
    keypad(stdscr, true); //true means getch() will return key instead of just error_num
    getmaxyx(stdscr,maxY,maxX);
    noecho();
    curs_set(0);
    timeout(100); //timeout for getch() 0 ==> non-blocking getch(), 1000= 1s
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

gfxNcurses::gfxNcurses() : maxY(1), maxX(1) {}

Position gfxNcurses::get_screen_max() {
    return Position(maxY, maxX);
}

