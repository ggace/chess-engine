#include "./util/Util.hpp"
#include "./core/Board.hpp"

int main() {
    Board board = Board();

    auto test = board.getPieceByPosition(Position(0,4))->getPossibleMovement(&board);
    

    return 0;
}