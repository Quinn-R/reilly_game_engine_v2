#include "MapEditor.hpp"

void MapEditor::setMousePos(sf::RenderWindow &window) {
    mousePos = sf::Vector2f(sf::Mouse::getPosition(window));
}
