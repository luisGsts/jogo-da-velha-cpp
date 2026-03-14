#include "Jogo.h"


void Jogo::changePlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void Jogo::getPos() 
{
    int pos;
    std::cout << "Jogador atual: " << currentPlayer << std::endl; 
    std::cout << "Digite a posicao da jogada! (1-9): ";
    std::cin >> pos;
        if((pos<1 || pos>9)) 
            throw std::out_of_range("Jogada invalida!");
        
    setPos(pos);
}

  


void Jogo::setPos(int pos)
{
    bool taken = false;

    switch(pos){
        case p1:
            if(!(mat[0][0] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(0,0,currentPlayer);
            checkWin();
            changePlayer(); break;

            case p2:
            if(!(mat[0][1] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(0,1,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p3:
            if(!(mat[0][2] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(0,2,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p4:
            if(!(mat[1][0] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(1,0,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p5:
            if(!(mat[1][1] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(1,1,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p6:
            if(!(mat[1][2] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(1,2,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p7:
            if(!(mat[2][0] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(2,0,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p8:
            if(!(mat[2][1] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(2,1,currentPlayer);
            checkWin();
            changePlayer(); break;

        case p9:
            if(!(mat[2][2] == ' '))
                throw std::runtime_error("Posicao ocupada!");
            set(2,2,currentPlayer);
            checkWin();
            changePlayer(); break;
    }
}

void Jogo::checkWin()
{
    // check lines
    for(int i=0;i<3;++i){
        if((mat[i][0] == currentPlayer && mat[i][1] == currentPlayer && mat[i][2] == currentPlayer))
            win = true;
    }

    // check columms
    for(int i=0;i<3;++i){
        if((mat[0][i] == currentPlayer  && mat[1][i] == currentPlayer && mat[2][i] == currentPlayer))
            win = true;
    }
    
    // check diagonals
    if (mat[0][0] == currentPlayer && mat[1][1] == currentPlayer && mat[2][2] == currentPlayer)
        win = true;
    
    if (mat[0][2] == currentPlayer && mat[1][1] == currentPlayer && mat[2][0] == currentPlayer)
        win = true;
    
    if(win)
        (currentPlayer == 'X') ? winner = "Jogador X" : winner = "Jogador O";

    else {
        int count=0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                if(mat[i][j] != ' ' )
                    count++;
        if(count == 9) 
            winner = "Empate";
    }
}
