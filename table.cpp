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
            std::cout << mat[i][j] <<'|';
        std::cout << '\n';
    }
}

void Table::showWinner(std::string _winner)
{
    if(_winner != "Empate")
        std::cout <<  "Ganhador: " << _winner << std::endl;
    else 
        std::cout << _winner << std::endl;
}
