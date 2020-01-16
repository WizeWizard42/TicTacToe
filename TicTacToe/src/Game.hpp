#pragma once
#include "Board.hpp"
#include <ostream>

class Game
{
    public:
        char getPlayer();
        void setPlayer();

        int getTurns();

        Board getBoard();

        void takeTurn(char);
        bool checkWin(char);

        friend std::ostream operator<<(std::ostream&, Game);
    private:
        char player_;
        int turns_;
        Board board_;
};

std::ostream operator<<(std::ostream&, Game);