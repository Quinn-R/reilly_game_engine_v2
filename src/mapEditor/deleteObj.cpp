#include "MapEditor.hpp"

int MapEditor::deleteObj(std::vector<sf::RectangleShape> &objShapes, sf::RenderWindow &window) {
    setMousePos(window);
    int answer = -1;
    sf::FloatRect tmp;

    for(int i = 0; i < objShapes.size(); i++) {
        tmp = objShapes[i].getGlobalBounds();
        if(tmp.contains(mousePos)) {
            answer = i;
        }
    }

    return answer;
}
