#include "Object.hpp"

Object::Object() {
	objectType = "default";

	objectShape.setSize(sf::Vector2f(32, 32));
	objectShape.setPosition(sf::Vector2f(0, 0));
	objectShape.setFillColor(sf::Color::Blue);
	objectShape.setOrigin(objectShape.getSize().x / 2, objectShape.getSize().y / 2);

	objectIsCollidable = 0;
	isVis = 1;

	objectSpeed = 100;
}

Object::Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, bool vis, int objSpeed) {
	objectType = objType;

	objectShape.setSize(objSize);
	objectShape.setPosition(objPos);
	objectShape.setFillColor(col);
	//objectShape.setOrigin(objectShape.getSize().x / 2, objectShape.getSize().y / 2);

	objectIsCollidable = isColl;
	isVis = vis;

	objectSpeed = objSpeed;
}
