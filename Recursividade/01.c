#include <stdio.h>

int mdc(int x, int y){
    if(y<=x && x % y == 0)
        return y;

    if(x<y)
        return mdc(y, x);

    return mdc(y, x%y);
}

int main(void){
    int x, y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    
    printf("O MDC entre %d e %d = %d", x, y, mdc(x, y));

    return 0;
}