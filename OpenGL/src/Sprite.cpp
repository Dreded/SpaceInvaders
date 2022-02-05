#include "Sprite.h"

uint32_t Sprite::rgb_to_uint32(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	return (r << 24) | (g << 16) | (b << 8) | a;
}
