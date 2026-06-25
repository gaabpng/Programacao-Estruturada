#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node1
{
    char comando[100];
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

void preenche(Node1 *lista, FILE *arquivo){
    Node1 *ultimo = lista;
    char buffer[100];

    while(fscanf(arquivo, "%s", buffer) == 1){
        Node1 *novo = (Node1*)malloc(sizeof(Node1));
        
        if (novo == NULL) 
            return; 

        strcpy(novo->comando, buffer);
        novo->prox = NULL;
        novo->ant = ultimo;
        ultimo->prox = novo;
        ultimo = novo;
    }

}

int main(void){
    Node1 *lista1 = (Node1*)malloc(sizeof(Node1));
    if (lista1 == NULL)
        return 1;

    lista1->prox = NULL;
    lista1->ant = NULL;
    int n = 3;

    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");
    preenche(lista1, arquivo);
    fclose(arquivo);
    rotaciona_n(lista1, n);

    Node1 *walk = lista1;

    while(walk!=NULL){
        printf("%s ", walk->comando);
        walk = walk->prox;
    }

    Node1 *lixo = lista1;
    while(lista1!=NULL){
        free(lixo);
        lista1 = lista1->prox;
        lixo = lista1;
    }
}