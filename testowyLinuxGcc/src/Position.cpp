/*
 * Position.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Position.hpp"

Position::Position():x(0), y(0) {
	// TODO Auto-generated constructor stub

}

Position::Position(int y, int x):
		x(x), y(y)
{

}

Position::~Position() {
	// TODO Auto-generated destructor stub
}

Position Position::operator+(const Position &r) const
{
	Position res;
	res.x = x + r.x;
	res.y = y + r.y;
	return res;
}

