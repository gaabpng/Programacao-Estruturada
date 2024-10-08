#include <stdio.h>

int main(void) {
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    float desconto = salario * 0.1;

    printf("Salario com desconto: %.2f", salario - desconto);
    return 0;
}