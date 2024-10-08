#include <stdio.h>
int main(void){
  int a, b, c;
  printf("Insira os valores de A, B e C: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c)
    printf("A é o maior valor");
  else
    if (b>c)
      printf("B é o maior valor");
    else
      printf("C é o maior valor");
}