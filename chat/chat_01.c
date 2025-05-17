#include <stdio.h>
#include <stdlib.h> // Para malloc e free

void trocaInicioEFim(int *vetor, int tamanho) {
    int temporario = *vetor;
    *vetor = *(vetor + tamanho - 1); // último elemento
    *(vetor + tamanho - 1) = temporario;
}

int main(void) {
    int *vetor, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Alocação dinâmica de memória
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    trocaInicioEFim(vetor, tamanho);

    printf("\nVetor após a troca: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Liberar a memória alocada
    free(vetor);

    return 0;
}