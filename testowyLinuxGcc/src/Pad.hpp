/*
 * Pad.h
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef PAD_HPP_
#define PAD_HPP_

#include "Position.hpp"
#include "GameObjectInterface.hpp"
#include "gfxInterface.hpp"

class Pad : public GameObjectInterface{
public:
	//Pad();
	Pad(gfxInterface& gfx_in, int maxY, int maxX);
	~Pad() override;
	void Render() override;
	void Update() override;
	void Move(Position vector);
	void SetSign(char c);

private:
	int length;
	Position pos;
	char sign;
	gfxInterface& gfx;

};

#endif /* PAD_HPP_ */
