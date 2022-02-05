#pragma once

#include <cstdint>

class Sprite
{

public:
	size_t width, height;
	uint32_t color;
	uint8_t* data;

	uint32_t rgb_to_uint32(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);
};

