#include <stdio.h>
#include <math.h>

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

        // Matriz bidimensional para representar o tabuleiro
        int tabuleiro[10][10] = {0};
    
        // Navio vertical (3 partes) na coluna 1, linhas 1 a 3
        tabuleiro[1][1] = 3;
        tabuleiro[2][1] = 3;
        tabuleiro[3][1] = 3;
    
        // Navio horizontal (3 partes) na linha 4, colunas 2 a 4
        tabuleiro[4][2] = 3;
        tabuleiro[4][3] = 3;
        tabuleiro[4][4] = 3;
    
        // Navio diagonal (3 partes) da posição (5,5) até (7,7)
        tabuleiro[5][5] = 3;
        tabuleiro[6][6] = 3;
        tabuleiro[7][7] = 3;
    
        // Outro navio diagonal (3 partes) da posição (8,2) até (6,4)
        tabuleiro[8][2] = 3;
        tabuleiro[7][3] = 3;
        tabuleiro[6][4] = 3;
    
        // Exibição do tabuleiro completo
        printf("Tabuleiro:\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
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

    // Procedimento para preencher a área afetada por uma habilidade em cone
    void preencherCone(int tabuleiro[10][10], int x, int y) {
        for (int i = 0; i < 3; i++) {
            for (int j = -i; j <= i; j++) {
                if (x + i < 10 && y + j >= 0 && y + j < 10) {
                    tabuleiro[x + i][y + j] = 1;
                }
            }
        }
    }

    // Procedimento para preencher a área afetada por uma habilidade em cruz
    void preencherCruz(int tabuleiro[10][10], int x, int y) {
        for (int i = -2; i <= 2; i++) {
            if (x + i >= 0 && x + i < 10) {
                tabuleiro[x + i][y] = 1;
            }
            if (y + i >= 0 && y + i < 10) {
                tabuleiro[x][y + i] = 1;
            }
        }
    }

    // Procedimento para preencher a área afetada por uma habilidade em octaedro
    void preencherOctaedro(int tabuleiro[10][10], int x, int y) {
        for (int i = -2; i <= 2; i++) {
            for (int j = -2 + abs(i); j <= 2 - abs(i); j++) {
                if (x + i >= 0 && x + i < 10 && y + j >= 0 && y + j < 10) {
                    tabuleiro[x + i][y + j] = 1;
                }
            }
        }
    }

    // Posicionamento das habilidades especiais
    preencherCone(tabuleiro, 2, 2); // Exemplo de habilidade em cone
    preencherCruz(tabuleiro, 5, 5); // Exemplo de habilidade em cruz
    preencherOctaedro(tabuleiro, 7, 7); // Exemplo de habilidade em octaedro

    // Exibição do tabuleiro completo
    printf("Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}