// 13. Faça um programa que leia dois números inteiros não nulos e que calcule e mostre a soma e a
// multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo.

#include <stdio.h>

int main(void){
    int Valor_1, Valor_2;

    printf("Digite dois números inteiros não nulos:\n");
    scanf("%d %d", &Valor_1, &Valor_2);

    int soma = Valor_1 + Valor_2;
    int multiplicacao = Valor_1 * Valor_2;

    float divisao = (Valor_2 * 1.0) / (Valor_1 * 1.0);
    int subtracao = Valor_2 - Valor_1;

    printf("%d", soma);
    printf("%d", multiplicacao);

    printf("%f", divisao);
    printf("%d", subtracao);
}
