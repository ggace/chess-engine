#include "./util/Util.hpp"
#include "./pieces/Piece.hpp"

int main() {
    Piece piece = Piece(WHITE, 0,0);
    cout << piece.toString();

    return 0;
}