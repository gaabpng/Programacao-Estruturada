#include <stdio.h>

char* concat(char* s1, char* s2) {
    int pos = 0;

    for(int i = 0; i < 100; i++) {
        if(s1[i] == '\0') {
            pos = i;
            break; 
        }
    }

    for(int i = 0; i < 50; i++) {
        s1[pos] = s2[i]; 
        
        if(s2[i] == '\0') {
            break; 
        }
        pos++;
    }

    return s1;
}

int main(void){
    char s1[100], s2[50];

    printf("Insira a primeira string: \n");
    scanf("%s", s1);

    printf("Insira a segunda string: \n");
    scanf("%s", s2);

    char* resultado = concat(s1, s2);

    printf("Concatenacao = %s \n", resultado);

    return 0;
}