#ifndef TABLE_H
#define TABLE_H

#include <array>
#include <iostream>
#include <iomanip>

enum Posicao {p1=1,p2,p3,p4,p5,p6,p7,p8,p9};

class Table{
protected:
    std::array<std::array<char, 3>, 3> mat;     // create a 2d array

public: 
    Table();                        // constructor
    void set(int , int, char);      // set an element in thr 2d array 
    void showGame();                // show the game on screen
    void showHeader();              // show the header
    void showWinner(std::string);
    
};  

#endif