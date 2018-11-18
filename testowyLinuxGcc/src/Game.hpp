/*
 * Game.hpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "GameObjectInterface.hpp"
#include <list>


class Game {
public:
	Game();
	virtual ~Game();

	void Update();
	void Render();
	void AddObj(GameObjectInterface& obj);
	void ProcessInput();

private:
	std::list<GameObjectInterface*> gameObjList;

};

#endif /* GAME_HPP_ */
