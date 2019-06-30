#ifndef MOVE_HPP
#define MOVE_HPP

#include "../../inc/common.hpp"

class Move {
private:
	sf::Vector2f delta;
	//sf::Vector2f intersect;

	sf::RectangleShape xaxis;
	sf::RectangleShape yaxis;

	std::vector<int> objectCollides;
public:
	Move();
	~Move();

	sf::Vector2f moveObject(std::vector<int> &moves, int objectSpeed, float dtAsSeconds, sf::RectangleShape object);

  	void collide(std::vector<sf::RectangleShape> &objShapes, int objCollider);
	void collide(sf::RectangleShape objShape1, sf::RectangleShape objShape2);

	bool isCollide(sf::RectangleShape objShape1, sf::RectangleShape objShape2);

	void resetCollide();
};

#endif
