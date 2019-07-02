#include "MapEditor.hpp"

void Move::collide(std::vector<sf::RectangleShape> &objShapes, int objCollider) {
    for(int i = 0; i < objShapes.size(); i++) {
        if(i == objCollider) {
            continue;
        }

        delta = sf::Vector2f(objShapes[i].getPosition() - objShapes[objCollider].getPosition());

        xaxis.setSize(sf::Vector2f(objShapes[objCollider].getSize().x + 0.2, objShapes[objCollider].getSize().y - 1));
        yaxis.setSize(sf::Vector2f(objShapes[objCollider].getSize().x - 1, objShapes[objCollider].getSize().y + 0.2));

        xaxis.setOrigin(xaxis.getSize().x / 2, xaxis.getSize().y / 2);
        yaxis.setOrigin(yaxis.getSize().x / 2, yaxis.getSize().y / 2);

        xaxis.setPosition(objShapes[objCollider].getPosition());
        yaxis.setPosition(objShapes[objCollider].getPosition());

        if(xaxis.getGlobalBounds().intersects(objShapes[i].getGlobalBounds())) {
            if(delta.x < 0) {
                objectCollides[0] = 1;
            } else {
                objectCollides[1] = 1;
            }
        }

        if(yaxis.getGlobalBounds().intersects(objShapes[i].getGlobalBounds())) {
            if(delta.y < 0) {
                objectCollides[2] = 1;
            } else {
                objectCollides[3] = 1;
            }
        }

    }
}

void Move::collide(sf::RectangleShape objShape1, sf::RectangleShape objShape2) {
    delta = sf::Vector2f(objShape1.getPosition() - objShape2.getPosition());

    xaxis.setSize(sf::Vector2f(objShape2.getSize().x + 0.2, objShape2.getSize().y - 1));
    yaxis.setSize(sf::Vector2f(objShape2.getSize().x - 1, objShape2.getSize().y + 0.2));

    xaxis.setOrigin(xaxis.getSize().x / 2, xaxis.getSize().y / 2);
    yaxis.setOrigin(yaxis.getSize().x / 2, yaxis.getSize().y / 2);

    xaxis.setPosition(objShape2.getPosition());
    yaxis.setPosition(objShape2.getPosition());

    if(xaxis.getGlobalBounds().intersects(objShape1.getGlobalBounds())) {
        if(delta.x < 0) {
            objectCollides[0] = 1;
        } else {
            objectCollides[1] = 1;
        }
    }

    if(yaxis.getGlobalBounds().intersects(objShape1.getGlobalBounds())) {
        if(delta.y < 0) {
            objectCollides[2] = 1;
        } else {
            objectCollides[3] = 1;
        }
    }
}
