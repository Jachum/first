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
#include "gfxNcurses.hpp"

using namespace std;

bool ProcessInput(Pad &playerPad)
{
    bool isExit = false;
	int key = getch();
	//printw("Key = 0x%x", key);
	switch (key)
	{
	case KEY_LEFT:
	{
		Position vec(0,-1);
		playerPad.Move(vec);
	}
	    break;
	case KEY_RIGHT:
	{
		Position vec(0,1);
		playerPad.Move(vec);
	}
	    break;
	case 'q':
    {
        isExit=true;
    }
        break;
	default:
		break;
	}
    return isExit;
}

int main() {
    gfxNcurses gfx;
    gfx.init();
	Game gameLogic;
	//attroff(A_REVERSE);
	//printw("Hello ncurses4 has color()=%d, maxY=%d, maxX=%d\n", has_colors(), maxY, maxX);

	Pad playerPad(gfx, gfx.getMaxY()-1, gfx.getMaxX()/2);
	//move(maxY-1, maxX/2);
	//playerPad.Print();

	//printw("Hello");
	//on tu robi rzutowanie na klase bazowa dlatego sie nie odpala
	gameLogic.AddObj(playerPad);

    bool isExit = false;
    while (not isExit)
	{
	  isExit = ProcessInput(playerPad);
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
