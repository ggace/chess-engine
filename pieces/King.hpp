#pragma once

#include "Piece.hpp"


class King: public Piece {
public:
    
    King(Turn own, int row, int col);

    // 오버라이딩 필요. 각각마다 다름.
    vector<Position> getPossibleMovement(const Board* board) override;

    bool isPossibleMovement(const Board* board, int row, int col) override;
};