#include "Move.hpp"

sf::Vector2f Move::moveObject(std::vector<int> &moves, int objectSpeed, float dtAsSeconds, sf::RectangleShape object) {


    sf::Vector2f objectPos = object.getPosition();

    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    }

    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    }

    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    }

    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    }

    return objectPos;
}

/*
sf::Vector2f Move::moveObject(std::vector<int> &moves, int objectSpeed, float dtAsSeconds, sf::RectangleShape object) {


    sf::Vector2f objectPos = object.getPosition();

    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[0] == 1) {
        objectPos.x += 0.1;
    }

    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    } else if(objectCollides[0] == 1) {
        objectPos.x -= 0.1;
    }

    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[2] == 1) {
        objectPos.y += 0.1;
    }

    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    } else if(objectCollides[2] == 1) {
        objectPos.y -= 0.1;
    }

    return objectPos;
}
*/

/*void Move::moveObject(std::vector<int> &moves, float dtAsSeconds, std::vector<sf::RectangleShape> &object, int objCollider) {


    sf::Vector2f objectPos = getPosition();

    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[0] == 1) {
        objectPos.x -= intersect.x;
        // objectPos.x += 1;
    }

    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    } else if(objectCollides[1] == 1) {
        objectPos.x += intersect.x;
        // objectPos.x -= 1;
    }

    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[2] == 1) {
        objectPos.y -= intersect.y;
        // objectPos.y += 1;
    }

    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    } else if(objectCollides[3] == 1) {
        objectPos.y += intersect.y;
        // objectPos.y -= 1;
    }


    resetCollide();
    collide(object);
    return objectPos;
}*/

/*sf::Vector2f Move::moveObject(std::vector<int> &moves, float dtAsSeconds, sf::RectangleShape object {


    sf::Vector2f objectPos = object.getPosition();

    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[0] == 1) {
        objectPos.x -= intersect.x;
        // objectPos.x += 1;
    }

    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    } else if(objectCollides[1] == 1) {
        objectPos.x += intersect.x;
        // objectPos.x -= 1;
    }

    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[2] == 1) {
        objectPos.y -= intersect.y;
        // objectPos.y += 1;
    }

    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    } else if(objectCollides[3] == 1) {
        objectPos.y += intersect.y;
        // objectPos.y -= 1;
    }


    resetCollide();
    //collide(object);
    return objectPos;
}*/
