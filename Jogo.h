#ifndef JOGO_h
#define JOGO_H
#include "Table.h"
#include <iostream>
#include <exception>


class Jogo : public Table {

private:
    std::string  winner;
    bool win;
    char currentPlayer;
public: 
    Jogo()
    : win(false), currentPlayer('X'), Table::Table() {};
    std::string getWinner(){return this->winner;};
    bool playerWin(){return win;}                              
    void changePlayer();                                       // change the current player
    void setPos(int pos);                                      // set the position played
    void getPos();                                             // get the position the player wanna mark down on table
    void checkWin();                                           // check if an player already won
};





#endif