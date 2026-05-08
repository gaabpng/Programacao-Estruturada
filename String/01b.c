#include <stdio.h>

int tamanho_string(char s1[]){
    int count = 0;
    for(int i = 0; i < 100; i++){
        if(s1[i] != '\0')
            count++;
        else
            return count;
    }
    return count;
}

int main(void){
    char s1[50];

    printf("Insira a string: \n");
    scanf("%s", s1);

    printf("o tamanho da string é: %d \n", tamanho_string(s1));

    return 0;
}