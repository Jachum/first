/*
 * Pad.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Pad.hpp"
#include <ncurses.h>

Pad::Pad(int maxY, int maxX):
length(5), pos(maxY,maxX)
{

}

Pad::Pad(): length(5){
	// TODO Auto-generated constructor stub

}

Pad::~Pad() {
	// TODO Auto-generated destructor stub
}

void Pad::Update()
{

}

void Pad::Render()
{
	move(pos.y, pos.x);
	//printw("Hello Pad render()");
	for(int i=0; i<length; i++)
	{
		printw("#");
	}
}
