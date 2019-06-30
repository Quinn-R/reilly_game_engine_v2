#include "Graphics.hpp"

void Graphics::draw() {
	clear();
	display();
}

void Graphics::draw(sf::Color col, sf::RectangleShape objShape) {
	clear(col);
	drawEntity(objShape);
	display();
}

void Graphics::draw(sf::Color col, std::vector<sf::RectangleShape> &objShapes) {
	clear(col);
	drawEntity(objShapes);
	display();
}