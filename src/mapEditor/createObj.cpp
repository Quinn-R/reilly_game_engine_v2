#include "MapEditor.hpp"

int MapEditor::createObj(sf::Vector2f gridSize, std::vector<sf::RectangleShape> &objShapes, sf::RenderWindow &window) {
    setMousePos(window);
    setObjGrid(gridSize);

    mod.x = int(mousePos.x) % int(objGrid.x);
    dif.x = int(mousePos.x) - mod.x;

    mod.y = int(mousePos.y) % int(objGrid.y);
    dif.y = int(mousePos.y) - mod.y;

    tempObj.setPosition(sf::Vector2f(dif.x, dif.y));

    for(int i = 0; i < objShapes.size(); i++) {
        if(tempObj.getPosition() == objShapes[i].getPosition()) {
            return 0;
        }
    }

    return 1;
}
