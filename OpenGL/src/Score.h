#pragma once
#include <fstream>

class Score
{
	
private:
	uint32_t high_score;
	uint32_t score;
	uint32_t extra_life_points = 500;
public:
	bool addLife;
	Score();
	~Score();
	void setScore(uint32_t score);
	uint32_t getScore();
	uint32_t getHighScore();

private:
	void read_high_score();
	void write_high_score();
	void extraLife();
};

