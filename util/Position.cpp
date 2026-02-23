#include "Position.hpp"

Position::Position(int t_row, int t_col): row(t_row), col(t_col) {}

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