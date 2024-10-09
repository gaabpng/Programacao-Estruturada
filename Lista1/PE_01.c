#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Insira os valores de A, B e C");
  scanf("%d %d %d", &a, &b, &c);

  if (a < b + c && b < a + c && c < a + b) {
    printf("É um triângulo");
  }
  else {
    printf("Não é um triângulo");
  }
}