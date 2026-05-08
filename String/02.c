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

int eh_palindromo(char string[]){
    char invertido[50];
    int tamanho = tamanho_string(string); 
    
    int j = 0;
    
    for(int i = tamanho - 1; i >= 0; i--){
        invertido[j] = string[i];
        j++;
    }
    
    invertido[j] = '\0';

    for(int i = 0; i<tamanho; i++){
        if(invertido[i] != string[i]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    char string[50];
    printf("Insira a string: ");
    scanf("%s", string);

    if(eh_palindromo(string))
        printf("é palindromo");
    else
        printf("nao é palindromo");
    
    return 0;
}