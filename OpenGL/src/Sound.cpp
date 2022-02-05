#include "Sound.h"

irrklang::ISoundEngine* SoundEngine = irrklang::createIrrKlangDevice();

Sound::Sound()
	:MoveSoundPos(0)
{

}
int Sound::Play(SoundFile Sound, bool loop)
{
	std::string file = "audio/" + std::to_string(Sound) + ".wav";
	SoundEngine->play2D(file.c_str(), false);
	return 1;
}

void Sound::AlienMovePlay()
{
	SoundFile sound = Move[MoveSoundPos];
	MoveSoundPos++;
	if (MoveSoundPos == 4)
		MoveSoundPos = 0;
	Sound::Play(sound);
}

void Sound::UFO_FlyingPlay()
{
	SoundFile sound = Sound::UFO_Flying;
	Sound::Play(sound);
}

void Sound::Player_ShootPlay()
{
	SoundFile sound = Sound::Player_Shoot;
	Sound::Play(sound);
}

void Sound::Player_DeathPlay()
{
	SoundFile sound = Sound::Player_Death;
	Sound::Play(sound);
}

void Sound::Invader_KilledPlay()
{
	SoundFile sound = Sound::Invader_Killed;
	Sound::Play(sound);
}

void Sound::UFO_DeathPlay()
{
	SoundFile sound = Sound::UFO_Death;
	Sound::Play(sound);
}

void Sound::ExtraLifePlay()
{
	SoundFile sound = Sound::ExtraLife;
	Sound::Play(sound);
}
