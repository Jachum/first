/*
 * GameObject.hpp
 *
 *  Created on: 18 wrz 2017
 *      Author: janek
 */

#ifndef GAMEOBJECT_HPP_
#define GAMEOBJECT_HPP_

class GameObject {
public:
	GameObject();
	virtual ~GameObject();
	virtual void Update()=0;
	virtual void Render()=0;
};

#endif /* GAMEOBJECT_HPP_ */
