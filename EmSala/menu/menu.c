#include <stdio.h>

char menu() {
  char op;

  printf("Escolha uma operação:\n");
  printf("+: adição\n");
  printf("-: subtração\n");
  printf("*: multiplicação\n");
  printf("/: divisão\n");
  printf("!: fim\n");
  printf("===\n");
  scanf(" %c", &op);
  return op;
}

int isValid(char op) {
    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '!') {
      return 1;
    }
    else {
      return 0;
    }
}

int main(void) {
  float a, b;
  printf("Insira o primeiro número: ");
  scanf("%f", &a);
  printf("Insira o segundo número: ");
  scanf("%f", &b);

  char op;
  op = menu();

  if (op != '!') {
    {
      while (!isValid(op)) {
        printf("Operação inválida\n");
        op = menu();
      }

      switch (op) {
      case '+':
        printf("%f\n", a + b);
        break;
      case '-':
        printf("%f\n", a - b);
        break;
      case '*':
        printf("%f\n", a * b);
        break;
      case '/':
        printf("%f\n", a / b);
        break;
      }
    }
  }
}