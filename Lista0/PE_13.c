#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Insira os números: ");
  scanf("%d %d", &num1, &num2);

  int op = num1 + num2;
  printf("Soma = %d \n", op);

  op = num1 * num2;
  printf("Multiplicação = %d \n", op);

  float op2 = (num1 * 1.0) / num2;
  printf("Divisão = %.2f \n", op2);

  op = num1 - num2;
  printf("Subtração = %d \n", op);
  return 0;
}