#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "../../inc/common.hpp"

class Object {
private:
	sf::RectangleShape objectShape;

	bool objectIsCollidable;
	bool isVis;

	int objectType;
	int objectSpeed;
public:
	Object();
	Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl, bool vis, int objSpeed);

	void setPosition(sf::Vector2f);
	sf::Vector2f getPosition();

	void setSize(sf::Vector2f);
	sf::Vector2f getSize();

	sf::RectangleShape getShape();
	int getSpeed();

	void setType(int objType);
	int getType();

	void setOrigin(sf::Vector2f objOrigin);
	void setRotation(float objRotation);

	void setVisible(bool vis);
	bool isVisible();

	bool getObjCollidable();
};

#endif
