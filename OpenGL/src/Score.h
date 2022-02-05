#pragma once
#include <fstream>

class Score
{
	
private:
	uint32_t high_score;
	uint32_t score;
public:
	Score();
	~Score();
	void setScore(uint32_t score);
	uint32_t getScore();
	uint32_t getHighScore();

private:
	void read_high_score();
	void write_high_score();
};

