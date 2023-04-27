#pragma once

#include "piece.hpp"

class Field {
    private:
        Piece *piece;
    public:
        Field()=default;
        ~Field()=default;
        void setPiece(Piece *piece, Color color, string iconName);
        Piece* getPiece();
        vector<pair<int,int>> getMoves(int x, int y);
};

