#pragma once

#include "Sprite.h"

class Player
{
public:
	size_t x,y;
	size_t life, speed;
	int move_dir;
	Sprite sprite;

	Player();
	~Player();
	void setLife(size_t life);
	size_t getLife();
	void Shoot();
	void Move(size_t& game_width);
	void setPosition(size_t x, size_t y);
};

