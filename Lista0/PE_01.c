#include <stdio.h>

int main(void) {
    double altura;
    double largura;
    double area;
    double perimetro;

    printf("Informe a altura do retângulo: ");
    scanf("%lf", &altura);  // Usar %lf para leitura de double

    printf("Informe a largura do retângulo: ");
    scanf("%lf", &largura);  // Usar %lf para leitura de double

    area = altura * largura;
    perimetro = 2 * (altura + largura);

    // Exibindo com 2 casas decimais
    printf("Área: %.2f \n", area);
    printf("Perímetro: %.2f\n", perimetro);
}
