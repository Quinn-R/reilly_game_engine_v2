#include "Move.hpp"

Move::Move() {
    for(int i = 0; i < 4; i++) {
        objectCollides.push_back(0);
    }
}
Move::~Move() {}