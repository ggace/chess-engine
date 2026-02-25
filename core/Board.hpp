#pragma once

#include "../util/Util.hpp"
#include "../pieces/Piece.hpp"

class Board {
private:
    Piece* board[8][8] = {0,};

    void initialize();
public:
    Board();

    // Move대로 board 업데이트
    // Move 실행
    void move(); // Move를 받자.

    // Move 실행 취소용
    void unmove(); // Move 받자.

    string boardToStringFen();

    Piece* getPieceByPosition(Position position);

    // 8*8이니깐 64비트에 1, 0으로 있나 없나 표시
    long long getBoardPositionOfAll(); // 모든 기물 위치

    // 8*8이니깐 64비트에 1, 0으로 있나 없나 표시
    long long Board::getBoardPositionFrom(Turn turn); // turn의 반대되는놈.
};