#include <stdio.h>

int main(void){
  float temperatura;

  printf("Informe a temperatura em graus Celsius: ");
  scanf("%f", &temperatura);

  float farenheit = (temperatura * 9.0 / 5) + 32;
  printf("Temperatura em Farenheit: %.2f", farenheit);
  return 0;
}
