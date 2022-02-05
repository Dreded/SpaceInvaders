#pragma once

#include "Sprite.h"

class Player
{
public:
	size_t x,y;
	size_t life;
	Sprite sprite;

	Player();
	~Player();
	void setLife(size_t life);
	size_t getLife();
	void Shoot();
	void setPosition(size_t x, size_t y);
};

