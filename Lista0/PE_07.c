#include <stdio.h>
int main(void) {
    float nota1;
    float nota2;
    float nota3;

    printf("Insira as notas 1, 2 e 3: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f", media);
    return 0;
}