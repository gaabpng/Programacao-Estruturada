#include <stdio.h>

int main(void) {
  float base;
  float altura;

  printf("Base: ");
  scanf("%f", &base);

  printf("Altura: ");
  scanf("%f", &altura);

  float area = (base * 1.0 * altura) / 2;

  printf("Area = %.2f", area);
}