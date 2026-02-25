#include "King.hpp"
#include "../core/Board.hpp"

King::King(Turn own, int row, int col) : Piece(own, row, col)  {
    type = KING;
    possibleMovement = {
        {-1, 1}, {0, 1}, {1, 1},
        {-1, 0},         {1, 0},
        {-1,-1}, {0,-1}, {1,-1}
    };
}

// 오버라이딩 필요. 각각마다 다름.
vector<Position> King::getPossibleMovement(const Board* board) {
    vector<Position> result;

    const long long positionOfAll = board->getBoardPositionOfAll();
    const long long positionOfOpposite = board->getBoardPositionFrom(owner);
    long long positionOfMine = positionOfAll ^ positionOfOpposite;
    int current_file = position.getFile();
    int current_rank = position.getRank();
    for(auto [dfile, drank] : possibleMovement) {
        int next_file = current_file + dfile;
        int next_rank = current_rank + drank;

        if(!isInBoard(next_file, next_rank)) {
            continue;
        }

        // 내 꺼 있으면 못감.
        // 상대꺼 있으면 캡쳐로 가능 -> 캡쳐 표시를 어케 할건지.
        // 굳이 캡처인걸 표시해야될까? 그냥 game클래스나 board 클래스에서 처리하면 되는거 아님? 
        // 로그에만 남기면 되니깐 game 클래스만 알면 될듯.

        if(!(positionOfMine >> (next_file * 8 + next_rank) & 1)) {
            result.push_back(Position(next_file, next_rank));
        }
    }

    // 캐슬링 구현 필요.

    return result;
}

bool King::isPossibleMovement(const Board* board, int row, int col) {
    return true;
}