// 4) Escreva um programa que decide se duas strings lidas são palíndromos mútuas, ou seja, se uma igual a outra, se escrita de trás para frente.
//  Exemplos: amor e roma

#include <stdio.h>
#include <string.h>


int palindromo_mutuo(char s1[], char s2[]){
    int tam_1 = strlen(s1);
    int tam_2 = strlen(s2);

    if (tam_1 != tam_2) {
        return 0;
    }
    
    int j = tam_2 - 1;

    for(int i=0; i<tam_1; i++){
        if(s1[i] == s2[j])
            j--;
        else
            return 0;
    }
    return 1;
}

int main(void){
    char s1[50], s2[50];

    printf("Insira a primeira string: \n");
    scanf("%s", s1);

    printf("Insira a segunda string: \n");
    scanf("%s", s2);

    if(palindromo_mutuo(s1, s2)){
        printf("são palindromos mutuos");
        return 0;
    }
    else{
        printf("não são palindromos mutuos");    
        return 0;
    }
}