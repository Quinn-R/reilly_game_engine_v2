#ifndef MAPEDITOR_HPP
#define MAPEDITOR_HPP

#include "../../inc/common.hpp"

class MapEditor {
private:
	sf::RectangleShape tempObj;

	sf::Vector2f mousePos;
	sf::Vector2f objGrid;
	sf::Vector2f mod;
	sf::Vector2f dif;
public:
	MapEditor();
	~MapEditor();

	void setMousePos(sf::RenderWindow &window);
	void setObjGrid(sf::Vector2f gridSize);

	int createObj(sf::Vector2f gridSize, std::vector<sf::RectangleShape> &objShapes, sf::RenderWindow &window);
	int deleteObj(std::vector<sf::RectangleShape> &objShapes, sf::RenderWindow &window);
	sf::Vector2f getObjPos();
};

#endif
