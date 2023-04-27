#pragma once

#include "pawn.hpp"
#include "emptyfield.hpp"
#include "rook.hpp"
#include "bishop.hpp"
#include "knight.hpp"
#include "queen.hpp"
#include "king.hpp"
#include "colour.hpp"
#include "board.hpp"

class Game {
    private:
        Color currentMove;
        vector<pair<int,int>> pieceMoves;
        bool isGameOver = false;
        Board * board;
    public:
        Game();
        Color getCurrentMove();
        bool getGameOver();
        void setGameOver();
        void endGame();
        void setCurrentMove();
        Board* getBoard();
};
