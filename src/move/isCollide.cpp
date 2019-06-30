#include "Move.hpp"

bool Move::isCollide(sf::RectangleShape objShape1, sf::RectangleShape objShape2) {
    delta = sf::Vector2f(objShape1.getPosition() - objShape2.getPosition());

    xaxis.setSize(sf::Vector2f(objShape2.getSize().x + 0.2, objShape2.getSize().y - 1));
    yaxis.setSize(sf::Vector2f(objShape2.getSize().x - 1, objShape2.getSize().y + 0.2));

    xaxis.setOrigin(xaxis.getSize().x / 2, xaxis.getSize().y / 2);
    yaxis.setOrigin(yaxis.getSize().x / 2, yaxis.getSize().y / 2);

    xaxis.setPosition(objShape2.getPosition());
    yaxis.setPosition(objShape2.getPosition());

    if(xaxis.getGlobalBounds().intersects(objShape1.getGlobalBounds())) {
        if(delta.x < 0) {
            return true;
        } else {
            return true;
        }
    }

    if(yaxis.getGlobalBounds().intersects(objShape1.getGlobalBounds())) {
        if(delta.y < 0) {
            return true;
        } else {
            return true;
        }
    }
}
