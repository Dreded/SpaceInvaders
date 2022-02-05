#pragma once

#include <irrKlang.h>
#include <string>
#include <iostream>

class Sound
{
public:
	enum SoundFile : unsigned char {
		UFO_Flying = 0,		// ufo_highpitch.wav on repeat
		Player_Shoot,		// Shoot.wav
		Player_Death,		// Explosion.wav
		Invader_Killed,		// invaderkilled.wav
		Move1,				// fastinvader1.wav
		Move2,				// fastinvader2.wav
		Move3,				// fastinvader3.wav
		Move4,				// fastinvader4.wav
		UFO_Death,			// ufo_lowpitch.wav
		ExtraLife = 9		// extendedplay.wav
	};


private:
	unsigned char MoveSoundPos;
	SoundFile Move[4] = { Move1,Move2,Move3,Move4 };
	int Play(SoundFile Sound, bool loop = false);

public:
	Sound();
	void AlienMovePlay();
	void UFO_FlyingPlay();
	void Player_ShootPlay();
	void Player_DeathPlay();
	void Invader_KilledPlay();
	void UFO_DeathPlay();
	void ExtraLifePlay();
};

