# jogo-da-velha-cpp em C++

Um **Jogo da Velha** interativo desenvolvido em C++ para rodar diretamente no terminal.
O projeto aplica conceitos de Orientação a Objetos (POO), herança, tratamento de exceções e manipulação de matrizes aprendidos em sala de aula.

## Funcionalidades

**Modo 2 Jogadores:** Alternância automática entre as peças `X` e `O`.
**Tratamento de Erros:** Sistema robusto com `try-catch` para capturar jogadas fora do tabuleiro (1-9) ou em posições já ocupadas.
**Game Loop:** Opção para reiniciar e jogar novamente sem fechar o programa.

---

## Estrutura do Código

O projeto está dividido de forma modular:

`Table.h` / `Table.cpp`: Classe base responsável pelo tabuleiro 3x3, renderização da interface no terminal e gerenciamento do estado visual.

`Jogo.h` / `Jogo.cpp`: Classe derivada (herda de `Table`) que controla a lógica interna do jogo, turnos, validação de jogadas e verificação de condições de vitória.]

`main.cpp`: Ponto de entrada que gerencia o fluxo principal (Game Loop) e o tratamento de exceções.

---

## Como Jogar

O tabuleiro é mapeado utilizando os números de **1 a 9**, correspondentes às seguintes posições:

 1 | 2 | 3 |
 4 | 5 | 6 |
 7 | 8 | 9 |