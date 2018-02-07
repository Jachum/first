/*
 * Game.cpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#include "Game.hpp"
#include "GameObject.hpp"

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::Update()
{
	for (std::list<GameObject*>::iterator i=gameObjList.begin(); i!=gameObjList.end(); i++)
	{
		(*i)->Update();
	}
}

void Game::Render()
{
	for (std::list<GameObject*>::iterator i=gameObjList.begin(); i!=gameObjList.end(); i++)
	{
		(*i)->Render();
	}
}

void Game::AddObj(GameObject& obj)
{
	gameObjList.push_back(&obj);
}

void Game::ProcessInput()
{

}
