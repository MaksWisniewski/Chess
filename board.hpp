#pragma once

#include "field.hpp"
#include "pawn.hpp"
#include "emptyfield.hpp"
#include "rook.hpp"
#include "bishop.hpp"
#include "knight.hpp"
#include "queen.hpp"
#include "king.hpp"
#include "colour.hpp"

class Board {
    private:
        Field ***fields;

    public:
    Board();
    ~Board();
    void swapPiece(pair<int,int> previousPosition, pair<int,int> newPosition);
    Field* getField(int x, int y) ;
    bool isKingMatted();
};
