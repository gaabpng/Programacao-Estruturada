#include <stdio.h>

int main(void) {
    float nota1;
    float peso1;
    float nota2;
    float peso2;
    float nota3;
    float peso3;

    printf("Insira a 1a nota: ");
    scanf("%f", &nota1);

    printf("Insira o peso da 1a nota: ");
    scanf("%f", &peso1);

    printf("Insira a 2a nota: ");
    scanf("%f", &nota2);

    printf("Insira o peso da 2a nota: ");
    scanf("%f", &peso2);

    printf("Insira a 3a nota: ");
    scanf("%f", &nota3);

    printf("Insira o peso da 3a nota: ");
    scanf("%f", &peso3);

    float media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("Media: %.2f", media);
}