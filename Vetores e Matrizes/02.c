#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ler_string_dinamica(){
    char buffer[1000];

    if (fgets(buffer, 1000, stdin) == NULL)
        return NULL;

    buffer[strcspn(buffer, "\n")] = '\0';

    int tamanho_texto = strlen(buffer) + 1;
    char *texto = malloc(tamanho_texto * sizeof(char));

    if (texto != NULL)
        strcpy(texto, buffer);

    return texto;
}

int main(void){
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char contagem[26] = {0};

    printf("Digite o texto: ");
    char *frase = ler_string_dinamica();

    for (int i = 0; i < strlen(frase); i++){
        for (int j = 0; j < 26; j++){
            if(frase[i] == alfabeto[j]){
                contagem[j]++;
                break;
            }
        }
    }

    printf("Letra | Repetições \n");
    
    for(int i = 0; i < 26; i++){
        printf("%c | %d \n", alfabeto[i], contagem[i]);
    }

    free(frase);

    return 0;
}