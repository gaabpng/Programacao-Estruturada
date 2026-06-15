#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
    struct lista* prox;
} Lista;

void acopla(struct lista *origem, struct lista **destino){
    if(origem == NULL){
        *destino == NULL;
        return;
    }
    
    struct lista *atual = origem;
    struct lista *ultimo = NULL;

    while(atual!=NULL){

        struct lista *novo = (struct lista*) malloc(sizeof(struct lista));
        if(novo == NULL){
            puts("Erro de alocação");
            return;
        }
        
        strcpy(novo->nome, atual->nome);
        strcpy(novo->matricula, atual->matricula);
        novo->turma = atual->turma;
        novo->p1 = atual->p1;
        novo->p2 = atual->p2;
        novo->p3 = atual->p3;
        novo->prox = NULL;

        if (*destino == NULL) {
            *destino = novo;
        }
        else {
            ultimo->prox = novo;
        }

        ultimo = novo;

        atual = atual->prox;

    }

}