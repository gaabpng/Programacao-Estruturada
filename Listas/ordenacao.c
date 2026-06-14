#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

void ordena(char **nomes, int qt_nomes) {
    char *temp;

    for(int i = 0; i<qt_nomes; i++){
        for (int j = 0; j < qt_nomes - 1; j++) {
            if (strlen(nomes[j]) > strlen(nomes[j + 1])) {
                temp = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = temp;
            }
        }
    }
}

void preenche(char **nomes, int qt_nomes){
    for(int i = 0; i<qt_nomes; i++){
        printf("Insira o nome %d \n", i+1);
        fgets(nomes[i], 100, stdin);        
    }
    puts("");
}

int main(void) {
    int qt_nomes;

    printf("Insira o total de nomes que você irá adicionar: \n");
    scanf("%d", &qt_nomes); 

    getchar();

    char **nomes = (char **)malloc(qt_nomes * sizeof(char *));
    
    for (int i = 0; i < qt_nomes; i++) {
        nomes[i] = (char *)malloc(100 * sizeof(char));
    }

    preenche(nomes, qt_nomes);
    ordena(nomes, qt_nomes);

    puts("Lista de nomes:");
    for(int i = 0; i<qt_nomes; i++){
        printf("%s", nomes[i]);
    }

    for (int i = 0; i < qt_nomes; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}