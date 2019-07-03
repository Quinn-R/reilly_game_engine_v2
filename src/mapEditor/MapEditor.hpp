#ifndef MAPEDITOR_HPP
#define MAPEDITOR_HPP

#include "../../inc/common.hpp"

class MapEditor {
private:
	sf::RectangleShape tempObj;

	sf::Vector2f mousePos;
	sf::Vector2f div;
	sf::Vector2f dif;
public:
	MapEditor();
	~MapEditor();

	void setMousePos(sf::RenderWindow &window);
	void setObjGrid(sf::Vector2f gridSize, bool isMousePressed, sf::RenderWindow &window);

	sf::Vector2f getObjPos();
};

#endif
