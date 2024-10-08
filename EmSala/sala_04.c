#include <stdio.h>

int main(void) {
  float nota1, nota2;

  printf("Insira as notas 1 e 2: ");
  scanf("%f %f", &nota1, &nota2);

  if (nota1 + nota2 >= 12)
    printf("Aprovado");
  else
    if (nota1 + nota2 >= 8)
      printf("Verificação Suplementar");
    else
      printf("Reprovado");
}