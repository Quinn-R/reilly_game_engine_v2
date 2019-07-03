#include "MapEditor.hpp"

void MapEditor::setObjGrid(sf::Vector2f gridSize, bool isMousePressed, sf::RenderWindow &window) {
    setMousePos(window);

    div.x = int(mousePos.x) % 32;
    dif.x = int(mousePos.x) - div.x;

    div.y = int(mousePos.y) % 32;
    dif.y = int(mousePos.y) - div.y;

    tempObj.setPosition(sf::Vector2f(dif.x, dif.y));
}
