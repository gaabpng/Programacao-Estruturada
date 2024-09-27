#include <stdio.h>

int main(void){
  float salario;
  float vendas;
  float adicional;
  float total;

  printf("Insira o salário do vendedor: ");
  scanf("%f", &salario);

  printf("Insira o total de vendas do vendedor: ");
  scanf("%f", &vendas);

  adicional = vendas * 0.04;
  total = salario + adicional;

  printf("O salário total do vendedor é: R$%.2f",total);
}