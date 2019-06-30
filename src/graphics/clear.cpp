#include "Graphics.hpp"

void Graphics::clear() {
	window.clear(sf::Color::White);
}

void Graphics::clear(sf::Color col) {
	window.clear(col);
}