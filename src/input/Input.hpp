#ifndef INPUT_HPP
#define INPUT_HPP

#include "../../inc/common.hpp"

class Input {
private:
	std::vector<int> moves; // left, right, up, down
	sf::Event event;
public:
	Input();
	~Input();
	
	void events(sf::RenderWindow& window);
	std::vector<int>& getMoves();
};

#endif
