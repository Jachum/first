/*
 * Game.hpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "GameObject.hpp"
#include <list>


class Game {
public:
	Game();
	virtual ~Game();

	void Update();
	void Render();
	void AddObj(GameObject& obj);
	void ProcessInput();

private:
	std::list<GameObject*> gameObjList;

};

#endif /* GAME_HPP_ */
