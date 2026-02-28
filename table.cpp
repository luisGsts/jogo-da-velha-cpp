#include "Table.h"

Table::Table()
{
    for(auto &c : mat)
        c.fill(' ');                    // start the array with a blank space
}

void Table::set(int i, int j, char c)
{
    mat[i][j] = c;
}

char Table::get(int i, int j) const
{
    return mat[i][j];
}

void Table::showHeader()                  
{
    std::cout   << "===============\n" 
                << std::setw(15) 
                << "JOGO DA VELHA\n"
                << "===============\n";
}

void Table::showGame()
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            std::cout << get(i,j) <<'|';
        std::cout << '\n';
    }
}



void Table::getPos() {
    int pos;
    std::cout << "Digite a posicao da jogada! (1-9): ";
    std::cin >> pos;
    setPos(pos);
}   


void Table::setPos(int pos)
{
    switch(pos){
        case p1:
            set(0,0,'X');
        case p2:
            set(0,1,'X');
        case p3:
            set(0,2,'X');
        case p4:
            set(1,0,'X');
        case p5:
            set(1,2,'X');
        case p6:
            set(1,3,'X');
        case p7:
            set(2,0,'X');
        case p8:
            set(2,1,'X');
        case p9:
            set(2,2,'X');
    }
}