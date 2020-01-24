#include "Game.hpp"
#include <iostream>

using std::cout;
using std::endl;

char Game::getPlayer() {return player_;}
void Game::setPlayer(char player) {player_=player;}

int Game::getTurns() {return turns_;}

Board Game::getBoard() {return board_;}

std::ostream& operator<<(std::ostream& os, const Game& game)
{
    os << game.board_ << endl;
    os << "Turns taken: " << game.turns_ << endl;
    return os;
}