#include <stdio.h>

int main(void) {
  char sexo;
  float peso;

  printf("Insira o seu sexo (M/F)");
  scanf("%c", &sexo);

  printf("Insira o seu peso");
  scanf("%f", &peso);

  printf("%c", sexo);
}