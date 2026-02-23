#include "Position.hpp"

Position::Position(int r, int c) : row(r), col(c) {}

void Position::setPosition(int row, int col) {
    this->row = row;
    this->col = col;
}

int Position::getRow() {
    return row;
}
int Position::getCol() {
    return col;
}

void Position::setRow(int r) {
    this->row = r;
}
void Position::setCol(int c) {
    this->col = c;
}

string Position::toString() {
    string result(1, (char)(row + 'a'));
    result += (char)(col+'0');
    return result;
}