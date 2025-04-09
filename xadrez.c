#include <stdio.h>

int main() {
    // =============================
    // VARIÁVEIS DE CONFIGURAÇÃO
    // =============================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // =============================
    // MOVIMENTO DA TORRE (FOR)
    // =============================
    printf("Movimento da TORRE (%d casas para a Direita):\n", casasTorre);
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // =============================
    // MOVIMENTO DO BISPO (WHILE)
    // =============================
    printf("Movimento do BISPO (%d casas na Diagonal Cima Direita):\n", casasBispo);
    int j = 1;
    while (j <= casasBispo) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    printf("\n");

    // =============================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // =============================
    printf("Movimento da RAINHA (%d casas para a Esquerda):\n", casasRainha);
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

 

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
