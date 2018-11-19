/*
 * Pad.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Pad.hpp"
#include <ncurses.h>

Pad::Pad(gfxInterface& gfx_in, int start_y, int start_x):
length(5), pos(start_y, start_x), sign('#'), gfx(gfx_in)
{

}

//Pad::Pad(): length(5),sign('#'){
	// TODO Auto-generated constructor stub

//}

Pad::~Pad() {
	// TODO Auto-generated destructor stub
}

void Pad::Update()
{
	//handle collisions etc?
	if (pos.x < 0)
    {
	    pos.x = 0;
    }
   else if ((pos.x + length) > gfx.get_screen_max().x)
    {
		pos.x = pos.x - 1;
	}
}

void Pad::Render()
{
	move(pos.y, pos.x); //moves cursor, TODO move to PAL renderer
	//printw("Hello Pad render()");
	for(int i=0; i<length; i++)
	{
		printw("%c", sign);
	}
}

void Pad::Move(Position vector)
{
	pos = pos + vector;
}

void Pad::SetSign(char c)
{
	sign = c;
}
