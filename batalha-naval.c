#include <stdio.h>

/**
 * Desafio Batalha Naval - Nível Novato
 * Objetivo: Posicionar navios em uma matriz 10x10.
 */

int main() {
    // Definindo o tamanho do tabuleiro e dos navios
    int tabuleiro[10][10];
    int tamanhoNavio = 3;

    // Inicializando o tabuleiro com 0 (Água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- Posicionamento do Navio Horizontal ---
    // Coordenadas iniciais: Linha 2, Coluna 1
    int horizLinha = 2, horizColuna = 1;
    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[horizLinha][horizColuna + j] = 3;
    }

    // --- Posicionamento do Navio Vertical ---
    // Coordenadas iniciais: Linha 5, Coluna 6
    int vertLinha = 5, vertColuna = 6;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[vertLinha + i][vertColuna] = 3;
    }

    // --- Exibição do Tabuleiro ---
    printf("--- Tabuleiro Batalha Naval ---\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao final de cada linha da matriz
    }

    return 0;
}