// 🔄 Exercício 3 — Função que inverte os elementos de um vetor
// Objetivo: Escreva uma função que inverta os elementos de um vetor de n inteiros no próprio vetor, utilizando ponteiros.

// Requisitos:
// Leia n (tamanho do vetor).

// Alocar o vetor dinamicamente com malloc.

// Leia os valores.

// Inverta o vetor usando uma função com ponteiros (sem usar índice direto).

// Imprima antes e depois da inversão.

// Libere a memória com free.

#include <stdio.h>
#include <stdlib.h>

void inverter(int *vetor, int tamanho){
    int *ini = vetor; // *ini recebe o endereço do inicio do vetor
    int *fim = vetor + tamanho - 1; // *fim recebe o endereço do final do vetor

    while (ini<fim){
        int tmp = *ini; // tmp recebe o valor do inicio
        *ini = *fim; // valor de inicio recebe o valor de fi,
        *fim = tmp; // valor de fim recebe tmp

        ini++; // ENDEREÇO incrementa em um
        fim--; // ENDEREÇO decrementa em um
    }
}

void preencher(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int main(void){
    int tamanho;
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    preencher(vetor, tamanho);

    printf("Vetor antes da inversão:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    inverter(vetor, tamanho);

    for(int i=0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    return 0;
}