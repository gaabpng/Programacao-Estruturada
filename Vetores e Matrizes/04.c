#include <stdio.h>
#include <stdlib.h>

int contar_repeticoes(int **matriz, int linhas, int colunas) {
    int numero_procurado;
    int contador = 0;

    printf("\nQual elemento deseja contar? ");
    scanf("%d", &numero_procurado);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == numero_procurado) {
                contador++;
            }
        }
    }
    return contador; 
}

int main() {
    int linhas, colunas;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Insira a quantidade de colunas: ");
    scanf("%d", &colunas);

    // ALOCAÇÃO
    int **matriz = malloc(linhas * sizeof(int *));
    if (matriz == NULL) return 1;

    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) return 1;
    }

    // PREENCHE A MATRIZ
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); 
        }
    }

    // IMPRIME A MATRIZ
    printf("\nMatriz lida:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // CHAMADA DA FUNÇÃO
    int total = contar_repeticoes(matriz, linhas, colunas);
    printf("O numero aparece %d vezes na matriz.\n", total);

    // LIMPEZA
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}