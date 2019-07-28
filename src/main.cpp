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

std::vector<Object> objects;
std::vector<sf::RectangleShape> objShapes;

int main() {
	objects.push_back(Object());

	while(graphics.isOpen()) {
		timer.setTime();

		input.events(
			graphics.getWindow()
		);

		if(input.getLeftMousePressed()) {
			map.createObj(sf::Vector2f(32, 32), graphics.getWindow());
			objects.push_back(Object("na", sf::Vector2f(32, 32), map.getObjPos(), sf::Color::Black, 1, 0));
		}

		if(input.getRightMousePressed()) {
			objects.erase(map.deleteObj(objShapes, graphics.getWindow()));
		}

		move.resetCollide();
		move.collide(objShapes, 0);

		objects[0].setPosition(
			move.moveObject(input.getMoves(), objects[0].getSpeed(), timer.getTime(), objects[0].getShape())
		);

		resetObjShapes();

		graphics.draw(sf::Color::White, objShapes);
	}

	return 0;
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
