#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include "../../inc/common.hpp"

class Graphics {
private:
	sf::Vector2i windowRes;
	sf::RenderWindow window;
	sf::View view;
public:
	Graphics();
	~Graphics();
	
	void clear();
	void clear(sf::Color col);
	void draw();
	void draw(sf::Color col, sf::RectangleShape objShape);
	void draw(sf::Color col, std::vector<sf::RectangleShape> &objShapes);
	void drawEntity(sf::RectangleShape objShape);
	void drawEntity(std::vector<sf::RectangleShape> &objShapes);
	void display();
	
	bool isOpen();
	
	sf::RenderWindow& getWindow();
};

#endif
