#include "MapEditor.hpp"

void MapEditor::createObj(sf::Vector2f gridSize, sf::RenderWindow &window) {
    setMousePos(window);
    setObjGrid(gridSize);

    mod.x = int(mousePos.x) % int(objGrid.x);
    dif.x = int(mousePos.x) - mod.x;

    mod.y = int(mousePos.y) % int(objGrid.y);
    dif.y = int(mousePos.y) - mod.y;

    tempObj.setPosition(sf::Vector2f(dif.x, dif.y));
}
