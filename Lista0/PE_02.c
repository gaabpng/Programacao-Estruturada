#include <stdio.h>

int main(void) {
    char nome[50];
    float preco;
    float consumo;
    float total;

    printf("Informe o nome do cliente: ");
    scanf("%s", nome);

    printf("Informe o preço por Quilowatt: ");
    scanf("%f", &preco);

    printf("Informe o consumo em Quilowatt: ");
    scanf("%f", &consumo);

    total = preco * consumo;

    printf("Nome: %s\n", nome);
    printf("Total a pagar: %.2f", total);
}