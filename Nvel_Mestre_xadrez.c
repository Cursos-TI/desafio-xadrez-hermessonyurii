#include <stdio.h>

// Constantes para as direções básicas do tabuleiro
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Protótipos das funções recursivas
void mover_torre(int casas);
void mover_bispo(int casas);
void mover_rainha(int casas);

int main() {
    printf("=== DESAFIO MESTRE - MOVIMENTOS COMPLEXOS ===\n\n");

    // Movimentação da Torre (recursiva)
    printf("Movimento da Torre (recursivo):\n");
    mover_torre(5); // 5 casas para a direita
    printf("\n");

    // Movimentação do Bispo (recursivo + loops aninhados)
    printf("Movimento do Bispo (recursivo + loops aninhados):\n");
    mover_bispo(5); // 5 casas na diagonal superior direita
    printf("\n");

    // Movimentação da Rainha (recursiva)
    printf("Movimento da Rainha (recursivo):\n");
    mover_rainha(8); // 8 casas para a esquerda
    printf("\n");

    // Movimentação do Cavalo (loops complexos)
    printf("Movimento do Cavalo (loops complexos):\n");
    const int vertical = 2;   // 2 casas para cima
    const int horizontal = 1; // 1 casa para direita
    
    // Loop externo para controle do movimento em L
    for (int v = 0, h = 0; v < vertical || h < horizontal; ) {
        // Movimento vertical (2 casas para cima)
        if (v < vertical) {
            printf("Passo %d: %s\n", v + h + 1, CIMA);
            v++;
            continue; // Volta ao início do loop após movimento vertical
        }
        
        // Movimento horizontal (1 casa para direita)
        if (h < horizontal) {
            printf("Passo %d: %s\n", v + h + 1, DIREITA);
            h++;
        }
    }

    return 0;
}

// Função recursiva para movimento da Torre
void mover_torre(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Casa %d: %s\n", casas, DIREITA);
    mover_torre(casas - 1); // Chamada recursiva
}

// Função recursiva + loops aninhados para movimento do Bispo
void mover_bispo(int casas) {
    if (casas <= 0) return; // Caso base
    
    // Loop aninhado - externo vertical, interno horizontal
    for (int v = 1; v <= 1; v++) { // Controle vertical (1 iteração)
        for (int h = 1; h <= 1; h++) { // Controle horizontal (1 iteração)
            printf("Casa %d: %s + %s\n", casas, CIMA, DIREITA);
        }
    }
    mover_bispo(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento da Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Casa %d: %s\n", casas, ESQUERDA);
    mover_rainha(casas - 1); // Chamada recursiva
}