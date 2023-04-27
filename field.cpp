#include "field.hpp"

void Field::setPiece(Piece *p, Color color, string iconName ) {
    piece = p;
    piece->setColor(color);
    piece->setIconName(iconName);
}

Piece* Field::getPiece() {
    return piece;
}

vector<pair<int,int>> Field::getMoves(int x, int y) {
    return piece->getPossiblePieceMoves(x,y);
}
