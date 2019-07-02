#ifndef MAPEDITOR_HPP
#define MAPEDITOR_HPP

#include "../../inc/common.hpp"

class MapEditor {
private:
	sf::RectangleShape tempObj;
public:
	MapEditor();
	~MapEditor();

	void getMousePos();
	void setObjPos();
};

#endif
