#include "MapEditor.hpp"

void MapEditor::mapSave(std::string lvlName, std::vector<sf::RectangleShape> &objShapes, std::vector<std::vector<int> > objProp) {
    std::ofstream outFile;
    outFile.open(lvlName);

    for(int i = 0; i < objShapes.size(); i++) {
        outFile << objShapes[i].getSize() << objShapes[i].getPosition() << objShapes[i].getFillColor() << objShapes[i].getOrigin();
        for(int i = 0; i < objProp.size(); i++) {
            outFile << objProp[i];
        }
    }

    outFile.close();
}

/*
sf::RectangleShape objectShape;

bool objectIsCollidable;
bool isVis;

int objectType;
int objectSpeed;
*/

/*
objectShape.setSize(sf::Vector2f(32, 32));
objectShape.setPosition(sf::Vector2f(0, 0));
objectShape.setFillColor(sf::Color::Blue);
objectShape.setOrigin(objectShape.getSize().x / 2, objectShape.getSize().y / 2);
*/
