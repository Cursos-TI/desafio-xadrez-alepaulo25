#include <stdio.h>

// =========================
// Funções Recursivas
// =========================

// Movimento da Torre: recursivo, para a direita
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Casa %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas);
}

// Movimento da Rainha: recursivo, para a esquerda
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Casa %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas);
}

// Movimento do Bispo: recursivo + loops aninhados para diagonal cima-direita
void moverBispoRecursivo(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Casa %d: Cima Direita\n", casaAtual);
    moverBispoRecursivo(casaAtual + 1, totalCasas);
}

// Movimento do Bispo com loops aninhados
void moverBispoLoops(int totalLinhas, int totalColunas) {
    for (int linha = 1; linha <= totalLinhas; linha++) {
        for (int coluna = 1; coluna <= totalColunas; coluna++) {
            if (linha == coluna) {
                printf("Diagonal: Cima Direita (Linha %d, Coluna %d)\n", linha, coluna);
            }
        }
    }
}

// Movimento do Cavalo: duas casas para cima e uma para a direita
void moverCavalo(int movimentos) {
    printf("Movimento do CAVALO em 'L' (duas para cima, uma para a direita):\n");
    int movimentosFeitos = 0;
    for (int cima = 1; cima <= 2 * movimentos; cima++) {
        for (int direita = 1; direita <= movimentos; direita++) {
            if (cima % 2 == 0 && direita == 1) {
                printf("Movimento %d: Cima, Cima, Direita\n", ++movimentosFeitos);
                if (movimentosFeitos == movimentos) break;
            }
        }
        if (movimentosFeitos == movimentos) break;
    }
}

int main() {
    // =========================
    // CONFIGURAÇÕES
    // =========================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // =========================
    // TORRE (Recursivo)
    // =========================
    printf("Movimento da TORRE (recursivo, Direita):\n");
    moverTorre(1, casasTorre);
    printf("\n");

    // =========================
    // BISPO (Recursivo)
    // =========================
    printf("Movimento do BISPO (recursivo, Cima Direita):\n");
    moverBispoRecursivo(1, casasBispo);
    printf("\n");

    // =========================
    // BISPO (Loops Aninhados)
    // =========================
    printf("Movimento do BISPO (loops aninhados, Diagonal Cima Direita):\n");
    moverBispoLoops(casasBispo, casasBispo);
    printf("\n");

    // =========================
    // RAINHA (Recursivo)
    // =========================
    printf("Movimento da RAINHA (recursivo, Esquerda):\n");
    moverRainha(1, casasRainha);
    printf("\n");

    // =========================
    // CAVALO (Loops Complexos)
    // =========================
    moverCavalo(movimentosCavalo);

    return 0;
}
