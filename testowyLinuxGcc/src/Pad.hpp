/*
 * Pad.h
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef PAD_HPP_
#define PAD_HPP_

#include "Position.hpp"
#include "GameObject.hpp"

class Pad : public GameObject{
public:
	Pad();
	Pad(int maxY, int maxX);
	virtual ~Pad();
	virtual void Render();
	virtual void Update();
	void Move(Position vector);
	void SetSign(char c);

private:
	int length;
	Position pos;
	char sign;

};

#endif /* PAD_HPP_ */
