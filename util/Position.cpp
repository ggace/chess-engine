#include "Position.hpp"

Position::Position(int r, int c) : position(r*8+c) {}

void Position::setPosition(int file, int rank) {
    position = file * 8 + rank;
}

int Position::getFile() {
    return position / 8;
}
int Position::getRank() {
    return position % 8;
}

void Position::setFile(int r) {
    int rank = position % 8;
    position = r * 8 + rank;
}
void Position::setRank(int c) {
    int file = position / 8;
    position = file * 8 + c;
}

string Position::toString() {
    int file = position / 8;
    int rank = position % 8;
    string result(1, (char)(rank + 'a'));
    result += (char)(file+'1');
    return result;
}