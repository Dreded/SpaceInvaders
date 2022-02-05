#pragma once
#include "Sprite.h"

class Aliens
{
public:
	size_t x, y;
	Sprite sprites[6];
	Sprite deathSprite;

	Aliens();
	~Aliens();
	void Shoot();
	void setPosition(size_t x, size_t y);
};

