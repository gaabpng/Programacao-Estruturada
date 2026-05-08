#include <stdio.h>
#include <stdlib.h> 

int main(void) {
    int N;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Quantidade invalida. O programa sera encerrado.\n");
        return 1;
    }

    int *numeros = malloc(N * sizeof(int));

    if (numeros == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    printf("\nDigite os %d numeros:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (numeros[j] < numeros[j + 1]) { 
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }   

    for(int i = 0; i<N; i++){
        printf("%d \n", numeros[i]);
    }

    int faltando = 0;

    for(int i = 0; i<N-1; i++){
        if (numeros[i] != numeros[i+1]){
            faltando += numeros[i] - numeros[i + 1] - 1;
        }
    }

    printf("faltando %d numeros \n", faltando);
    
    free(numeros);
    return 0;
}