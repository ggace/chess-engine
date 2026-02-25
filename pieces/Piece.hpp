#pragma once

#include "../util/Util.hpp"
#include "../util/Position.hpp"
// #include "../core/Board.hpp"

class Board;

class Piece {
protected:
    Type type;
    Turn owner;
    Position position;
    bool is_moved;
    vector<array<int,2>> possibleMovement = {};
public:
    
    Piece(Turn own, int row, int col);

    virtual ~Piece() = default;

    bool moveTo(Board* board, int row, int col); // true: 성공, false: 실패

    // 오버라이딩 필요. 각각마다 다름.
    virtual vector<Position> getPossibleMovement(const Board* board) =0;

    virtual bool isPossibleMovement(const Board* board, int row, int col)=0;
    
    // getter
    Type getType() const;
    Turn getOwner() const;
    Position getPosition() const;
    
    // value와 구분한 이유: 
    // - moveTo를 실행했을때 is_moved를 바꾸고 다른 경우 is_moved를 변경할 이유가 없음. 
    // - undo 정도만으로 바꿀수 있게 해야하기 때문에 실제 변수 접근은 private
    bool isMoved() const;

    string toString(); // json 형식
};