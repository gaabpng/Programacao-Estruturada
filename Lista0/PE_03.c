#include <stdio.h>

int main(void) {
    float salario;
    float consumo;
    float total;

    printf("Informe o salário mínimo: ");
    scanf("%f", &salario);

    printf("Informe o consumo em Quilowatt: ");
    scanf("%f", &consumo);

    total = (salario / 10.0) * consumo;
    printf("Total a pagar: R$%.2f", total);
}