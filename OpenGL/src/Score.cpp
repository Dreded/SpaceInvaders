#include <iostream>
#include "Score.h"

Score::Score()
	: high_score(0), score(0), addLife(false)
{
	read_high_score();
}
Score::~Score()
{
	write_high_score();
}
void Score::setScore(uint32_t score)
{
	Score::score += score;
	if (Score::score > Score::high_score)
		Score::high_score = Score::score;
	if (!(Score::score % Score::extra_life_points))
		extraLife();
}
uint32_t Score::getScore()
{
	return Score::score;
}

uint32_t Score::getHighScore()
{
	return Score::high_score;
}

void Score::read_high_score()
{
	std::ifstream in("score.dat");
	if (in.good())
		in.read((char*)&high_score, sizeof(high_score));
	else
		high_score = 0;
	in.close();
}
void Score::write_high_score()
{
	std::ofstream out("score.dat");
	if (out.good())
		out.write((char*)&high_score, sizeof(high_score));
	out.close();
}
void Score::extraLife()
{
	// TODO: This needs to be less convoluted... I just don't know how yet.
	Score::addLife = true;
}