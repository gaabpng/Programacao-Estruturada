#include <stdio.h>

int main(void){
    float saldo;
    scanf("%f", &saldo);

    float ISSS = 0;
    if (saldo < 100){
        printf("Isento \n");
    }
    else if(saldo <= 1000){
        ISSS = saldo * 0.01;
    }
    else if(saldo <= 10000){
        ISSS = saldo * 0.02;
    }
    else if(saldo <= 100000){
        ISSS = saldo * 0.03;
    }
    else{
        ISSS = saldo * 0.05;
    }

    printf("ISSS = %f", ISSS);
}