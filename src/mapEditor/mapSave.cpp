#include "MapEditor.hpp"

void MapEditor::mapSave(std::string lvlName, std::vector<sf::RectangleShape> &objShapes, std::vector<std::vector<int> > objProp) {
    std::ofstream outFile;
    outFile.open(lvlName);

    for(int i = 0; i < objShapes.size(); i++) {
        for(int j = 0; j < objProp[i].size(); j++) {
            if(j != 0) {
                outFile << "/";
            }
            outFile << objProp[i][j];
        }

        outFile << ";\n";
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
