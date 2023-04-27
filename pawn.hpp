#pragma once

#include "piece.hpp"

class Pawn : public Piece {
    public:
        virtual vector<pair<int,int>> getPossiblePieceMoves(int x, int y) override;
};

