/*
 * Position.hpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef POSITION_HPP_
#define POSITION_HPP_

class Position {
public:
	Position();
	Position(int maxY, int maxX);
	virtual ~Position();
	Position operator+(const Position &r) const;

	int x;
	int y;
};

#endif /* POSITION_HPP_ */
