#include <stdio.h>

int main(void) {
  int ano_nasc;
  int ano = 2024;

  printf("Insira o ano do nascimento: ");
  scanf("%d", &ano_nasc);

  int idade = ano - ano_nasc;

  printf("Idade = %d", idade);
  return 0;
}