#include <stdio.h>

int main(void) {
    int hora;
    int minuto;
    int segundo = 0;

    printf("Digite as horas: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minuto);

    segundo = segundo + (hora * 3600);
    segundo = segundo + (minuto * 60);

    printf("Segundos totais = %d", segundo);
    return 0;
}