#pragma once

#include "Util.hpp"

class Position {
private:
    int position;
public:
    Position(int row, int col);

    void setPosition(int row, int col);

    int getFile();
    int getRank();

    void setFile(int r);
    void setRank(int c);

    string toString();
};