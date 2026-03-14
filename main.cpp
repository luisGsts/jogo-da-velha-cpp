#include "Table.h"
#include "Jogo.h"
#include <iostream>

void clearScreen() {
    // CSI[2J clears the entire screen.
    // CSI[H or CSI[1;1H moves the cursor to the top-left corner (home).
    std::cout << "\033[2J\033[1;1H"; 
}

int main(){
    Jogo j;
    bool gameOn = true;

    while(gameOn){
        try {
            clearScreen();
            j.showHeader();   
            j.showGame();

            j.getPos();

            if (j.playerWin() || j.getWinner() == "Empate") {
                j.showHeader();
                clearScreen();
                j.showGame();
                j.showWinner(j.getWinner());
                gameOn = false;
            }
        }
        catch(const std::runtime_error& e) {
            std::cerr << "Erro: " << e.what() << "\nPressione enter e tente novamente!"<< std::endl;
            std::cin.ignore();
            std::cin.get();
        }
        catch(const std::out_of_range& e) {
            std::cerr << "Erro: " << e.what() << "\nPressione enter e digite um numero entre 1 e 9." << std::endl;
            std::cin.ignore();
            std::cin.get();
        }
        catch(...) {
            std::cerr << "Exception desconhecida!\nPressione enter para encerrar o programa." << std::endl;
            std::cin.ignore();
            std::cin.get();
            gameOn = false;
        }
    }
    return 0;
}

