#pragma once

#include "colour.hpp"
#include <bits/stdc++.h>
using namespace std;

class Piece {
    private:
        Color color;
        string iconName;
    protected:
        vector<pair<int,int>> moves;
    public:

        Piece()=default;
        ~Piece()=default;
        Piece(Color color, string iconName);
        Color getColor();
        string getIconName();
        void setColor(Color color);
        void setIconName(string iconName);
        virtual vector<pair<int,int>> getPossiblePieceMoves(int x, int y);
        bool isOpponent(pair<int,int> positionTo);
        bool isEmpty(pair<int,int> positionTo);
};
