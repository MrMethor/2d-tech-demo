#pragma once
#include "SFML/Graphics.hpp"
#include "SpriteSheet.h"

class Tile {
public:
	sf::Sprite sprite;
	void loadTile(char id, SpriteSheet& spriteSheet);

private:
	int id = 0;
};