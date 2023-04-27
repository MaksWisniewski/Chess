#pragma once

#include "piece.hpp"

class Knight : public Piece{
    public:
        virtual vector<pair<int,int>> getPossiblePieceMoves(int x, int y) override;
};


