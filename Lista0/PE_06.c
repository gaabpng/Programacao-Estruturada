#include <stdio.h>
int main(void) {
    float salario;
    float contas;

    printf("Salario: ");
    scanf("%f", &salario);

    printf("Contas: ");
    scanf("%f", &contas);

    float total = 1.02 * contas;

    printf("Total a pagar: %.2f \n", total);
    printf("Restará de seu salário: %.2f", salario-total);
}