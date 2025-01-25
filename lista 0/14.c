// 14. Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os
// valores antes e depois da troca.
// Exemplo: (Antes) A = 5 B = 8
// (Depois) A = 8 B = 5

#include <stdio.h>

int main(void){
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    
    int A_depois, B_depois;
    A_depois = B;
    B_depois = A;

    printf("A= %d, B= %d \n", A, B);
    printf("A Depois = %d, B Depois = %d", A_depois, B_depois);

    return 0;
}