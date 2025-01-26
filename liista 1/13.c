#include <stdio.h>

int main(void){
    int hora_s, minuto_s, segundo_s;
    int hora_c, minuto_c, segundo_c;
    int hora_t = 0, minuto_t = 0, segundo_t = 0;

    printf("Digite a hora, minuto e segundo de saída (hh mm ss): ");
    scanf("%d %d %d", &hora_s, &minuto_s, &segundo_s);

    printf("Digite a hora, minuto e segundo de chegada (hh mm ss): ");
    scanf("%d %d %d", &hora_c, &minuto_c, &segundo_c);

    //converter para segundo
    hora_s = hora_s * 3600;
    minuto_s = minuto_s * 60;
    int total_s = hora_s + minuto_s + segundo_s;

    hora_c = hora_c * 3600;
    minuto_c = minuto_c * 60;
    int total_c = hora_c + minuto_c + segundo_c;

    segundo_t = total_c - hora_s;

    while (segundo_t >= 60){
        minuto_t++;
    }
    while (minuto_t >= 60){
        hora_t++;
    }

    print("O tempo total de viagem foi %d:%d:%d", hora_t, minuto_t, segundo_t);
    return 0;
}