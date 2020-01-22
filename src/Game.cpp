#include "Game.hpp"
#include <iostream>

char Game::getPlayer() {return player_;}
void Game::setPlayer(char player) {player_=player;}

int Game::getTurns() {return turns_;}

Board Game::getBoard() {return board_;}