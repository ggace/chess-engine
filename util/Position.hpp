#pragma once

#include "Util.cpp"

class Position {
private:
    int row;
    int col;
public:
    Position(int row, int col);

    void setPosition(int row, int col);

    int getRow();
    int getCol();

    void setRow(int r);
    void setCol(int c);
};