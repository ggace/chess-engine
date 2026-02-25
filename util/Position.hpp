#pragma once

#include "Util.hpp"

class Position {
private:
    int position;
public:
    Position(int file, int rank);

    void setPosition(int file, int rank);

    int getFile();
    int getRank();

    void setFile(int file);
    void setRank(int rank);

    string toString();
};