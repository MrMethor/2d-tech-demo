#pragma once
#include <SFML/Graphics.hpp>

class SpriteSheet {
public:
	const int GRID_SIZE = 16; // in tiles
	sf::Texture texture;

	SpriteSheet(std::string path);
	bool isDefined() const;
	int getTileSize() const;

private:
	bool defined = false;
	int tileSize = 0;
};