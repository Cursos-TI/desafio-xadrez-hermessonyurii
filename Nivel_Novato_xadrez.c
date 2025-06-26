#include <stdio.h>

//  Tarefa da Faculdade
//  DISCIPLINA: Introdução à Programação de Computadores, Programando em C.
//  Desafio: Movimentação de peças de xadrez - Nível Novato
//  Objetivo: Objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.
//  Autor: Hermesson Yuri
//  Professor: Nathan - Sergio Cardoso
//  Data: 26/06/2025
//  GitHub: https://github.com/hermessonyurii
 

// Constantes para as direções básicas do tabuleiro
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

int main() {
    
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    // O bispo se move na diagonal, então combinamos movimentos para cima e para direita
    // simultaneamente para cada casa percorrida
    
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= 5; i++) {
        // Para cada casa, imprimimos as duas direções combinadas
        printf("Casa %d: %s + %s\n", i, CIMA, DIREITA);
    }
    printf("\n"); // Espaço entre os movimentos

    
    // Movimentação da Torre - 5 casas para a direita
    // A torre se move em linha reta, então apenas uma direção por casa
    

    printf("Movimento da Torre:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: %s\n", i, DIREITA);
    }
    printf("\n");

    
    // Movimentação da Rainha - 8 casas para a esquerda
    // A rainha combina os movimentos da torre e do bispo, mas aqui vamos fazer
    // apenas movimento reto para esquerda conforme solicitado
    
    printf("Movimento da Rainha:\n");
    int casa = 1;
    while(casa <= 8) {
        printf("Casa %d: %s\n", casa, ESQUERDA);
        casa++;
    }

    return 0;
}