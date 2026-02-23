#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <utility>
#include <string>

using namespace std;

using Turn = enum{
    WHITE, BLACK
};

using Type = enum {
    KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN
};