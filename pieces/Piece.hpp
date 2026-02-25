#pragma once

#include "../util/Util.hpp"
#include "../util/Position.hpp"

class Piece {
protected:
    Type type;
    Turn owner;
    Position position; // 굳이? 필요한가 싶긴 해.
    bool is_moved;
    vector<array<int,2>> possibleMovement = {};
public:
    
    Piece(Turn own, int row, int col);

    virtual ~Piece() = default;

    bool moveTo(int row, int col); // true: 성공, false: 실패

    // 오버라이딩 필요. 각각마다 다름.
    virtual vector<Position> getPossibleMovement() const =0;

    virtual bool isPossibleMovement(int row, int col) const=0;
    
    // getter
    Type getType() const;
    Position getPosition() const;
    
    // value와 구분한 이유: 
    // - moveTo를 실행했을때 is_moved를 바꾸고 다른 경우 is_moved를 변경할 이유가 없음. 
    // - undo 정도만으로 바꿀수 있게 해야하기 때문에 실제 변수 접근은 private
    bool isMoved() const;

    string toString(); // json 형식
};