#include <stdio.h>
#include <stdlib.h>

typedef struct Node1
{
    char comandos[100];
    struct Node1 *ant;
    struct Node1 *prox;
}Node1;

void switch_pos(Node1 *head) {
    Node1 *fst = head->prox;
    Node1 *atual = head;
    Node1 *aux = head->prox;

    // Caminha até o último nó
    while (aux != NULL) {
        atual = aux;
        aux = aux->prox;
    }

    // A mágica que você desenhou:
    atual->ant->prox = NULL;  
    head->prox = atual; 
    atual->ant = head;      
    atual->prox = fst;     
    fst->ant = atual;       
}

void switch_neg(Node1 *head){
    Node1 *fst = head->prox;
    Node1 *atual = head;
    Node1 *aux = head->prox;

    while (aux != NULL) {
        atual = aux;
        aux = aux->prox;
    }//atual = ultimo nó

    head->prox = fst->prox;
    fst->prox->ant =head;
    atual->prox = fst;
    fst->ant = atual;
    fst->prox = NULL;
}

void rotaciona_n(Node1 *head, int n) {
    if (head->prox == NULL || head->prox->prox == NULL) {
        return;
    }

    if (n > 0) {
        for (; n > 0; n--) {
            switch_pos(head);
        }
    } else {
        for (; n < 0; n++) {
            switch_neg(head);
        }
    }
}