#pragma once

#include "piece.hpp"

class EmptyField : public Piece {
    public:
        virtual vector<pair<int,int>> getPossiblePieceMoves(int x, int y) override;
};

