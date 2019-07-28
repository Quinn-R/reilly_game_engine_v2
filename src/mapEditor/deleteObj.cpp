#include "MapEditor.hpp"

int MapEditor::getObjPos(std::vector<sf::RectangleShape> &objShapes, sf::RenderWindow &window) {
    setMousePos(window);
    int answer = -1;

    for(int i = 0; i < objShapes.size(); i++) {
        if(objShapes[i].contains(mousePos)) {
            answer = i;
        }
    }

    return answer;
}
