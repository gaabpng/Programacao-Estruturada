#include <stdio.h>
int main(void) {
    float nota1;
    float nota2;
    float nota3;

    printf("Insira a nota 1: ");
    scanf("%f", &nota1);

    printf("Insira a nota 2: ");
    scanf("%f", &nota2);

    printf("Insira a nota 3: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f", media);
}