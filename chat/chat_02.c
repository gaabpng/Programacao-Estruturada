// 💡 Exercício 2 — Preencher e imprimir uma matriz usando ponteiros
// Objetivo: Criar uma função que preenche uma matriz 3x3 com valores lidos do usuário e outra que imprime essa matriz, usando aritmética de ponteiros.

// Dicas:
// Use apenas um int matriz[3][3] no main.

// Nas funções, acesse os elementos com ponteiros, ex: *(*(matriz + i) + j).

#include <stdio.h>

void preencher_matriz(int *matriz, int colunas) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Insira o valor de [%d][%d]: ", i, j);
            scanf("%d", (matriz + i * colunas + j));
        }
    }
}

int main(void) {
    int matriz[3][3];
    preencher_matriz(&matriz[0][0], 3);  // Passa o endereço do primeiro elemento e nº de colunas

    // Exibe a matriz só para conferir
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
