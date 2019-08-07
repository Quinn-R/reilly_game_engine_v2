#include "Input.hpp"

void Input::events(sf::RenderWindow& window) {
	leftMousePressed = 0;
	rightMousePressed = 0;
	while(window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			window.close();

		if (event.type == sf::Event::MouseButtonPressed) {
			if (event.mouseButton.button == sf::Mouse::Left)
				leftMousePressed = 1;
			if (event.mouseButton.button == sf::Mouse::Right)
				rightMousePressed = 1;
		}

	}

	if(/*gameType == 0*/1) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
	        moves[0] = 1;
	    } else {
	        moves[0] = 0;
	    }

	    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
	        moves[1] = 1;
	    } else {
	        moves[1] = 0;
	    }

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
	        moves[2] = 1;
	    } else {
	        moves[2] = 0;
	    }

	    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
	        moves[3] = 1;
	    } else {
	        moves[3] = 0;
	    }
	}
}
