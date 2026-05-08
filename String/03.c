#include <stdio.h>
#include <string.h>

int contar_palavras(char frase[]) {
    int count = 0;
    int dentro_da_palavra = 0; 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\n') {
            dentro_da_palavra = 0;
        } 

        else {
            if (dentro_da_palavra == 0) {
                count++;
                dentro_da_palavra = 1;
            }
        }
    }
    
    return count;
}

int main(void){
    char string[200];
    printf("Insira a string: ");
    fgets(string, 200, stdin);

    printf("O total de palavras da frase é: %d", contar_palavras(string));

    return 0;
}