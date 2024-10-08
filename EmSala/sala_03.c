#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Insira os valores de A, B e C: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a < b + c && b < a + c && c < a + b) {
    if (a == b && a == c)
      printf("Equilátero");
    else
      if (a == b || b == c || a == c)
        printf("Isosceles");
      else
        printf("Escaleno");
  }

  else {
    printf("Não é um triângulo");
  }
}