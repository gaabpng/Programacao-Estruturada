#include <stdio.h>

int main(void) {
  int num_1, num_2;
  printf("Insira dois números inteiros: ");
  scanf("%d %d", &num_1, &num_2);

  int soma = num_1 + num_2;
  printf("Soma = %d\n", soma);

  int multipicacao = num_1 * num_2;
  printf("Multiplicação = %d\n", multipicacao);

  if (num_1 != 0) {
    float divisão = num_2 * 1.0 / num_1;
    printf("Divisão = %.2f\n", divisão);
  }
  else {
    printf("Divisão por zero é impossível");
  }
  int subtração = num_2 - num_1;
  printf("Subtração = %d\n", subtração);


}