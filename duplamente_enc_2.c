//2) Especifique uma struct e um tipo em C, através de uma lista ordenada duplamente encadeada 
//que armazena em cada nó uma chave e um nome. Intercale duas dessas listas de tal forma que a lista resultante seja ordenada.

#include <stdio.h>
#include <stdlib.h>

typedef struct lista_ordenada{
    int chave;
    char nome[50];
    struct lista_ordenada *pre;
    struct lista_ordenada *prox;
}lista_ordenada;

lista_ordenada *mescla(lista_ordenada *lista1, lista_ordenada *lista2){
    lista_ordenada *resultante = (lista_ordenada*) malloc(sizeof(lista_ordenada));
    
    // Boa prática: testar se a alocação funcionou
    if (resultante == NULL) {
        printf("Erro de alocação!");
        return NULL;
    }
    
    resultante->prox = NULL;
    resultante->pre = NULL;

    lista_ordenada *aux1 = lista1->prox;
    lista_ordenada *aux2 = lista2->prox;

    lista_ordenada *atual_res = resultante;

    while(aux1 != NULL && aux2 != NULL){
        if(aux1->chave < aux2->chave){
            atual_res->prox = aux1;
            atual_res->prox->pre = atual_res;
            atual_res = atual_res->prox;
            aux1 = aux1->prox;
        }
        else{
            atual_res->prox = aux2;
            atual_res->prox->pre = atual_res;
            atual_res = atual_res->prox;
            aux2 = aux2->prox;
        }
    }

    if(aux1 != NULL){
        atual_res->prox = aux1;
        aux1->pre = atual_res;
    }
    else if(aux2 != NULL){
        atual_res->prox = aux2;
        aux2->pre = atual_res;
    }

    lista1->prox = NULL;
    lista2->prox = NULL;

    return resultante;
}
