#include <stdio.h>

int main(void) {
  int idade;
  printf("Insira a idade do nadador em anos: ");
  scanf("%d", &idade);

  if (idade <= 4) {
    printf("Categoria Baby");
  }
  else {
    if (idade <= 10) {
      printf("Categoria Infantil");
    }
    else {
      if (idade <= 17) {
        printf("Categoria Juvenil");
      }
      else {
        printf("Categoria Master");
      }
    }
  }
}