#include <stdio.h>
#include <string.h>

// A função testa APENAS se s1 é subsequência de s2
int eh_subsequencia(char s1[], char s2[]){
    int tam_1 = strlen(s1);
    int tam_2 = strlen(s2);

    if(tam_1 > tam_2) {
        return 0; 
    }

    int j = 0;
    
    for(int i = 0; i < tam_2; i++){
        if(s2[i] == s1[j]) {
            j++;
        }

        if(j == tam_1) {
            return 1;
        }
    }
    
    return 0;
}

int main(void){
    char s1[50], s2[50];

    printf("Insira a primeira string: \n");
    scanf("%s", s1);

    printf("Insira a segunda string: \n");
    scanf("%s", s2);

    // Sua excelente lógica cuidando do trabalho pesado!
    if(eh_subsequencia(s1, s2) || eh_subsequencia(s2, s1)){
        printf("Uma string e subsequencia da outra.\n");
    }
    else{
        printf("Nao sao subsequencias.\n");
    }
    
    return 0;
}