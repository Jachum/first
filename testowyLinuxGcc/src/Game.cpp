/*
 * Game.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Game.hpp"
#include "GameObjectInterface.hpp"

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::Update()
{
    //std::list<GameObjectInterface*>::iterator
	for (auto element : gameObjList)
	{
		element->Update();
	}
}

void Game::Render()
{
	//std::list<GameObjectInterface*>::iterator
	for (auto element : gameObjList)
	{
		element->Render();
	}
}

void Game::AddObj(GameObjectInterface& obj)
{
	gameObjList.push_back(&obj);
}

void Game::ProcessInput()
{

}
