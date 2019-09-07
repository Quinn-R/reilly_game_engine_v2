#include "../inc/common.hpp"

#include "graphics/Graphics.hpp"
#include "input/Input.hpp"
#include "move/Move.hpp"
#include "object/Object.hpp"
#include "timeUtil/TimeUtil.hpp"
#include "mapEditor/MapEditor.hpp"

void setObjShapes();
void resetObjShapes();
void fillObjProp();

Graphics graphics(500, 500, 0, "HelloWorld");
Input input;
Move move;
TimeUtil timer;
MapEditor map;

int eraN;

std::vector<Object> objects;
std::vector<sf::RectangleShape> objShapes;
std::vector<std::vector<int> > objProp;

int main() {
	objects.push_back(Object());

	while(graphics.isOpen()) {
		timer.setTime();

		input.events(
			graphics.getWindow()
		);

		move.resetCollide();
		move.collide(objShapes, 0);

		objects[0].setPosition(
			move.moveObject(input.getMoves(), objects[0].getSpeed(), timer.getTime(), objects[0].getShape())
		);

		if(input.getLeftMousePressed()) {
			if(map.createObj(sf::Vector2f(32, 32), objShapes, graphics.getWindow())) {
				objects.push_back(Object("na", sf::Vector2f(32, 32), map.getObjPos(), sf::Color::Black, 1, 1, 0));
			}
		}

		if(input.getRightMousePressed()) {
			eraN = map.deleteObj(objShapes, graphics.getWindow());
			if(eraN >= 0) {
				objects.erase(objects.begin() + eraN);
			}
		}

		resetObjShapes();
		std::cout << objShapes.size() << std::endl;

		graphics.draw(sf::Color::White, objShapes);
	}

	fillObjProp();
	// (std::string lvlName, std::vector<sf::RectangleShape> &objShapes, std::vector<std::vector<<int> > objProp)
	map.mapSave("lvl1", objShapes, objProp);
	return 0;
}

void fillObjProp() {
	for(int i = 0; i < objects.size(); i++) {
		objProp[i].push_back(objects[i].getObjCollidable());
		objProp[i].push_back(objects[i].isVisible());
		objProp[i].push_back(objects[i].getType());
		objProp[i].push_back(objects[i].getSpeed());
	}
	/*
	bool objectIsCollidable;
	bool isVis;

	int objectType;
	int objectSpeed;
	*/
}

void setObjShapes() {
	for(int i = 0; i < objects.size(); i++) {
		objShapes.push_back(objects[i].getShape());
	}
}

void resetObjShapes() {
	objShapes.clear();
	setObjShapes();
}
