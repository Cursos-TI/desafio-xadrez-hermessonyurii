#include <stdio.h>

//  DISCIPLINA: Introdução à Programação de Computadores, Programando em C.
//  Desafio: Movimentação do Cavalo no Xadrez - Nível Aventureiro
//  Objetivo: Implementar o movimento em "L" do cavalo usando loops aninhados (for e while), 
// demonstrando o controle preciso de estruturas de repetição em C.
//  Autor: Hermesson Yuri
//  Professor: Nathan - Sergio Cardoso
//  Data: 26/06/2025
//  GitHub: https://github.com/hermessonyurii
//  Detalhes: O cavalo deve mover 2 casas para baixo e 1 para esquerda, 
// com saída formatada de cada passo do movimento.

// Constantes para as direções básicas do tabuleiro
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

int main() {
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: %s + %s\n", i, CIMA, DIREITA);
    }
    printf("\n");

    // Movimentação da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: %s\n", i, DIREITA);
    }
    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int casa = 1;
    while(casa <= 8) {
        printf("Casa %d: %s\n", casa, ESQUERDA);
        casa++;
    }
    printf("\n");

    // MOVIMENTO DO CAVALO - DESAFIO AVENTUREIRO
    // O cavalo se move em L: 2 casas para baixo e 1 para esquerda
    // Implementação usando loops aninhados conforme requisitos
    
    printf("Movimento do Cavalo:\n");
    
    // Definindo constantes para o movimento do cavalo
    const int movimentos_baixo = 2;  // 2 casas para baixo
    const int movimentos_esquerda = 1; // 1 casa para esquerda
    
    // Primeira parte do L: movimento para baixo (2 casas)
    for(int i = 1; i <= movimentos_baixo; i++) {
        printf("Passo %d: %s\n", i, BAIXO);
    }
    
    // Segunda parte do L: movimento para esquerda (1 casa)
    int passo = 1;
    while(passo <= movimentos_esquerda) {
        printf("Passo %d: %s\n", movimentos_baixo + passo, ESQUERDA);
        passo++;
    }

    return 0;
}