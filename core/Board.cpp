#include "Board.hpp"

void Board::initialize() { // todo

}
Board::Board() { 
    initialize();
}

// Move대로 board 업데이트
// Move 실행
void Board::move(){ // todo

} // Move를 받자.

// Move 실행 취소용
void Board::unmove(){ // todo

} // Move 받자.

string Board::boardToStringFen(){ // todo

}

Piece* Board::getPieceByPosition(Position position){ // todo
    return board[position.getFile()][position.getRank()];
}


long long Board::getBoardPositionFrom(Turn turn){
    int cur = 0;
    long long result = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            result |= ((long long)(board[i][j] != 0 && board[i][j]->getType() != turn) << (cur++));
        }
    }
    return result;
}

// 8*8이니깐 64비트에 1, 0으로 있나 없나 표시
long long Board::getBoardPositionOfAll(){
    return getBoardPositionFrom(WHITE) | getBoardPositionFrom(BLACK);
}