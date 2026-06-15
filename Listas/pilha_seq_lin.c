#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *E;           
    int topo1;        
    int topo2;        
    int capacidade;   
} espaco;

espaco pil_dup;

void inicializa(int max) {
    pil_dup.E = (int *)malloc(max * sizeof(int));
    pil_dup.capacidade = max;
    pil_dup.topo1 = -1;
    pil_dup.topo2 = max;
}

void empilha(int val, int pos){
    if (pil_dup.topo1 + 1 == pil_dup.topo2) {
        puts("Overflow!");
        return;
    }

    if(pos == 1){
        pil_dup.topo1++;
        pil_dup.E[pil_dup.topo1] = val;
    }

    
    if(pos == 2){
        pil_dup.topo2--;
        pil_dup.E[pil_dup.topo2] = val;
    }
}

void desempilha(int pos){
    if(pos == 1){
        if(pil_dup.topo1 == -1){
            puts("pilha vazia!");
            return;
        }
        pil_dup.topo1--;
    }

    if(pos == 2){
        if(pil_dup.topo2 == pil_dup.capacidade){
            puts("pilha vazia!");
            return;
        }
        pil_dup.topo2++;
    }
}

void imprime(int pil) {
    if(pil == 1){
        if (pil_dup.topo1 == -1){
            puts("pilha vazia!");
            return;
        }
        
        puts("Pilha 1: ");
        for(int i = pil_dup.topo1; i>=0; i--){
            printf("%dº elemento: \n", pil_dup.E[i]);
        }

    }

    if(pil == 2){
        if (pil_dup.topo2 == pil_dup.capacidade) {
            puts("Pilha 2 está vazia!\n");
            return;
        }

        puts("Pilha 2: ");
        for (int i = pil_dup.topo2; i < pil_dup.capacidade; i++) {
            printf("[%d]: %d\n", i, pil_dup.E[i]);
        }
        printf("\n");
    }
}

int main(void) {
    int max_posicoes;
    int P1 = 1;
    int P2 = 2;

    printf("Defina o tamanho do espaco de memoria contiguo (MAX): ");
    scanf("%d", &max_posicoes);

    inicializa(max_posicoes);

    free(pil_dup.E);
    
    return 0;
}