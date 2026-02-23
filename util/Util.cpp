#include "Util.hpp"

string typeToString(Type type) {
    switch(type) {
        case KING:
            return "King";
        case QUEEN:
            return "Queen";
        case BISHOP:
            return "Bishop";
        case KNIGHT:
            return "Knight";
        case ROOK:
            return "Rook";
        case PAWN:
            return "Pawn";
        default:
            return "Undefined";
    }
}
string turnToString(Turn turn) {
    switch(turn) {
        case WHITE:
            return "white";
        case BLACK:
            return "black";
    }
    return "undefined";

}