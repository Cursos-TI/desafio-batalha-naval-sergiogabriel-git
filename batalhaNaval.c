#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // navios

    // Matriz bidimensional para representar o tabuleiro
    int tabuleiro[5][5] = {0};

    // Navio vertical (3 partes) na coluna 1, linhas 1 a 3
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[3][1] = 1;

    // Navio horizontal (3 partes) na linha 4, colunas 2 a 4
    tabuleiro[4][2] = 2;
    tabuleiro[4][3] = 2;
    tabuleiro[4][4] = 2;

    // Coordenadas de navio na vertical
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Coordenadas de navio na horizontal
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    /* código de tabela batalha naval 
    * utilizando o conceito de matriz e
    * loops aninhados */

    // matriz batalha naval
    int matriz[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {1,0,0,3,3,3,0,0,0,0},
        {2,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {4,0,0,0,0,0,0,0,0,0},
        {5,0,0,3,0,0,0,0,0,0},
        {6,0,0,3,0,0,0,0,0,0},
        {7,0,0,3,0,0,0,0,0,0},
        {8,0,0,0,0,0,0,0,0,0},
        {9,0,0,0,0,0,0,0,0,0}};
    
    // loop colunas de cabeçalho
    for(char coluna = 'A'; coluna < 'J'; ++coluna)
        printf("  %c", coluna);
        
    //loop alinhador
    for(short i = 0; i < 10; ++i) {
        printf("\n");
        
        // loop tabela
        for(short j = 0; j < 10; ++j)
        printf(" %d ", matriz[i][j]);
    }
    printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
