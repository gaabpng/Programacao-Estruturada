#include <stdio.h>

int potencia(X, N) {
  if (N != 1) {
    N = N - 1;
    X = X * X;
    potencia(X, N);
  }
  else {
    return X;
  }
}

int main() {
  int N, X;
  printf("Insira o valor X");
  scanf("%d", &X);

  printf("Insira a potencia de X");
  scanf("%d", &N);

  X = potencia(X, N);
  printf("%d", X);
}