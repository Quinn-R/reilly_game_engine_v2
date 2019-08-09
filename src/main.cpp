#include "../inc/common.hpp"

#include "graphics/Graphics.hpp"
#include "input/Input.hpp"
#include "move/Move.hpp"
#include "object/Object.hpp"
#include "timeUtil/TimeUtil.hpp"
#include "mapEditor/MapEditor.hpp"

void setObjShapes();
void resetObjShapes();

Graphics graphics;
Input input;
Move move;
TimeUtil timer;
MapEditor map;

int eraN;

std::vector<Object> objects;
std::vector<sf::RectangleShape> objShapes;

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
			map.createObj(sf::Vector2f(32, 32), graphics.getWindow());
			objects.push_back(Object("na", sf::Vector2f(32, 32), map.getObjPos(), sf::Color::Black, 1, 1, 0));
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

	return 0;
}

void setObjShapes() {
	for(int i = 0; i < objects.size(); i++) {
		if(objects[i].isVisible() == 1) {
			objShapes.push_back(objects[i].getShape());
		}
	}
}

void resetObjShapes() {
	objShapes.clear();
	setObjShapes();
}
