#include "Graphics.hpp"

void Graphics::drawEntity(sf::RectangleShape objShape) {
	window.draw(objShape);
}

void Graphics::drawEntity(std::vector<sf::RectangleShape> &objShapes) {
	for (unsigned int i = 0; i < objShapes.size(); i++) {
        window.draw(objShapes[i]);
    }
}