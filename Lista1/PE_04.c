#include <stdio.h>

int main(void) {
  int preco;

  printf("Insira o preço atual do produto: ");
  scanf("%d", &preco);

  if (preco <= 50)
    preco = preco + (preco * 0.05);
  else
    if (preco <= 100)
      preco = preco + (preco * 0.1);
    else
      preco = preco + (preco * 0.15);
  printf("%d\n", preco);

  if (preco <= 80)
    printf("O produto ficou barato");
  else
    if (preco <= 120)
      printf("O produto ficou normal");
    else
      if(preco <= 200)
        printf("O produto ficou caro");
      else
        printf("O produto ficou muito caro");
}