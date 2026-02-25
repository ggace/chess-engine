#include "Position.hpp"

Position::Position(int file, int rank) : position(file*8+rank) {}

void Position::setPosition(int file, int rank) {
    position = file * 8 + rank;
}

int Position::getFile() {
    return position / 8;
}
int Position::getRank() {
    return position % 8;
}

void Position::setFile(int file) {
    int rank = position % 8;
    position = file * 8 + rank;
}
void Position::setRank(int rank) {
    int file = position / 8;
    position = file * 8 + rank;
}

string Position::toString() {
    int file = position / 8;
    int rank = position % 8;
    string result(1, (char)(rank + 'a'));
    result += (char)(file+'1');
    return result;
}