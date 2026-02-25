#include "Position.hpp"

Position::Position(int r, int c) : position(r*8+c) {}

void Position::setPosition(int row, int col) {
    position = row * 8 + col;
}

int Position::getRow() {
    return position / 8;
}
int Position::getCol() {
    return position % 8;
}

void Position::setRow(int r) {
    int col = position % 8;
    position = r * 8 + col;
}
void Position::setCol(int c) {
    int row = position / 8;
    position = row * 8 + c;
}

string Position::toString() {
    int row = position / 8;
    int col = position % 8;
    string result(1, (char)(row + 'a'));
    result += (char)(col+'1');
    return result;
}