#pragma once

#include "../util/Util.hpp"
#include "../util/Position.hpp"

class Piece {
private:
    Type type;
    Turn owner;
    Position position;
    bool is_moved;
public:
    Piece(Turn own, int row, int col);

    void moveTo(int row, int col);
    vector<Position> getPossibleMovement();
    string toString();
};