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
#include "Position.hpp"

using namespace std;

void ProcessInput(Pad &playerPad)
{
	int key = getch();
	//printw("Key = 0x%x", key);
	switch (key)
	{
	case KEY_LEFT:
	{
		Position vec(0,-1);
		playerPad.Move(vec);
		playerPad.SetSign('L');
	}
	    break;
	case KEY_RIGHT:
	{
		Position vec(0,1);
		playerPad.Move(vec);
		playerPad.SetSign('R');
	}
	    break;
	default:
		break;
	}

}

int main() {
	initscr();
	keypad(stdscr, true); //true means getch() will return key instead of just error_num
	int maxY,maxX;
	getmaxyx(stdscr,maxY,maxX);

	Game gameLogic;
	//attroff(A_REVERSE);
	//printw("Hello ncurses4 has color()=%d, maxY=%d, maxX=%d\n", has_colors(), maxY, maxX);
	noecho();
	curs_set(0);
	timeout(100); //timeout for getch() 0 ==> non-blocking getch(), 1000= 1s

	Pad playerPad(maxY-1, maxX/2);
	//move(maxY-1, maxX/2);
	//playerPad.Print();

	//printw("Hello");
	//on tu robi rzutowanie na klase bazowa dlatego sie nie odpala
	gameLogic.AddObj(playerPad);

	while (true)
	{
	  ProcessInput(playerPad);
	  gameLogic.Update();
	  clear();
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