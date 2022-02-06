#include "Player.h"

Player::Player()
	: life(3), speed(2), move_dir(0)
{
	setPosition(0, 0);
	sprite.width = 11;
	sprite.height = 7;
	sprite.data = new uint8_t[77]
	{
		0,0,0,0,0,1,0,0,0,0,0, // .....@.....
		0,0,0,0,1,1,1,0,0,0,0, // ....@@@....
		0,0,0,0,1,1,1,0,0,0,0, // ....@@@....
		0,1,1,1,1,1,1,1,1,1,0, // .@@@@@@@@@.
		1,1,1,1,1,1,1,1,1,1,1, // @@@@@@@@@@@
		1,1,1,1,1,1,1,1,1,1,1, // @@@@@@@@@@@
		1,1,1,1,1,1,1,1,1,1,1, // @@@@@@@@@@@
	};
}

Player::~Player()
{
}

void Player::setLife(size_t life)
{
	Player::life = life;
}

size_t Player::getLife()
{
	life = Player::life;
	return life;
}

void Player::Shoot()
{
}

void Player::setPosition(size_t x, size_t y)
{
	Player::x = x;
	Player::y = y;
}

void Player::Move(size_t& game_width)
{
	int move_ammount = Player::speed * Player::move_dir;

	if (move_ammount != 0)
	{
		if (Player::x + Player::sprite.width + move_ammount >= game_width)
		{
			Player::x = game_width - Player::sprite.width;
		}
		else if ((int)Player::x + move_ammount <= 0)
		{
			Player::x = 0;
		}
		else Player::x += move_ammount;
	}
}
