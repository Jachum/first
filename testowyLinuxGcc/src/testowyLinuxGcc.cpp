//============================================================================
// Name        : testowyLinuxGcc.cpp
// Author      : JM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ncurses.h>

#include "Pad.hpp"
#include "Game.hpp"

using namespace std;

void ProcessInput()
{
	int key = getch();
}

int main() {
	initscr();
	keypad(stdscr, true);
	int maxY,maxX;
	getmaxyx(stdscr,maxY,maxX);

	Game gameLogic;
	//attroff(A_REVERSE);
	//printw("Hello ncurses4 has color()=%d, maxY=%d, maxX=%d\n", has_colors(), maxY, maxX);
	noecho();
	curs_set(0);
	timeout(100); //0 ==> non-blockign getch()

	Pad playerPad(maxY-1, maxX/2);
	//move(maxY-1, maxX/2);
	//playerPad.Print();

	//printw("Hello");
	//on tu robi rzutowanie na klase bazowa dlatego sie nie odpala
	gameLogic.AddObj(playerPad);

	while (true)
	{
	  ProcessInput();
		//printw("Hello");
	  gameLogic.Update();
	  gameLogic.Render();
	  refresh();
	  //usleep(1000);
	}
//clear();

//refresh();
	//start_color();
	//init_pair(1,COLOR_RED, COLOR_BLACK);
	//int litera = getch();
	//printw("you pressed: ");
	//attron(COLOR_PAIR(1));
	//printw("%d", litera);
	//attroff(COLOR_PAIR(1));

	//mvprintw(maxY/2, maxX/2, "middle");


	getch();
	endwin();

	return 0;
}
