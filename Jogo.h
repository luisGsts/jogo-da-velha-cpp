#ifndef JOGO_h
#define JOGo_H
#include "Table.h"
#include <iostream>


class jogo {

    private:
        std::string winner;
        bool win;
    public: 
        std::string getWinner(){return winner;};
};
#endif