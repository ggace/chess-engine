#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <utility>
#include <string>

using namespace std;

// 현재의 턴 순서 or 기물의 소유자를 표시하기 위함.
enum Turn{
    WHITE, BLACK
};

// 기물의 종류를 위함. 
// 실제 구동에서 필요한 것이 아닌 toString과 같이 정보를 출력할때 필요함.
enum Type {
    KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN
};