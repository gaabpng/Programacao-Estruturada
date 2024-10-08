#include <stdio.h>

int main(void) {
  float salario_recebido;
  float salario_minimo;

  printf("Insira o salário recebido pelo funcionario: ");
  scanf("%f", &salario_recebido);

  printf("Insira o salario minimo vigente: ");
  scanf("%f", &salario_minimo);

  float salarios_ganhos = (salario_recebido * 1.0) / salario_minimo;

  printf("O funcionário recebe %.2f salario(s) minimo(s)", salarios_ganhos);
  return 0;
}