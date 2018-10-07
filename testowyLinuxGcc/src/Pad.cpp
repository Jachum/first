/*
 * Pad.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Pad.hpp"
#include <ncurses.h>

Pad::Pad(int maxY, int maxX):
length(5), pos(maxY,maxX), sign('#')
{

}

Pad::Pad(): length(5),sign('#'){
	// TODO Auto-generated constructor stub

}

Pad::~Pad() {
	// TODO Auto-generated destructor stub
}

void Pad::Update()
{
	//handle collisions etc?
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
