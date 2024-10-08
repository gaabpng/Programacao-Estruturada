#include <stdio.h>

int main(void) {
    double altura;
    double largura;
    double area;
    double perimetro;

    printf("Informe a altura do retângulo: ");
    scanf("%lf", &altura);

    printf("Informe a largura do retângulo: ");
    scanf("%lf", &largura);

    area = altura * largura;
    perimetro = 2 * (altura + largura);

    printf("Área: %.2f \n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}
