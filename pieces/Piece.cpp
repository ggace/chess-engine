#include "Piece.hpp"

Piece::Piece(Turn own, int row, int col) : type(UNDEFINED), owner(own), is_moved(false), position(row, col) {}

bool Piece::moveTo(int row, int col){
    if(this->isPossibleMovement(row, col)) {
        position.setPosition(row, col);
        return true;
    }
    return false;
}


// getter
Type Piece::getType() const {
    return type;
}
Position Piece::getPosition() const {
    return position;
}

// value와 구분한 이유: 
// - moveTo를 실행했을때 is_moved를 바꾸고 다른 경우 is_moved를 변경할 이유가 없음. 
// - undo 정도만으로 바꿀수 있게 해야하기 때문에 실제 변수 접근은 private
bool Piece::isMoved() const{
    return is_moved;
}


string Piece::toString() {
    return "{\n" \
        "'type': '" + typeToString(type) + "',\n" \
        "'owner': '" + turnToString(owner) + "', \n" \
        "'position: '" + position.toString() + "', \n" \
    "}";
}