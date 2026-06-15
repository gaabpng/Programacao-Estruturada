
#include <stdio.h>
#include <stdlib.h>

struct lista {
    int valor;
    struct lista *prox;
};

// a. Verificar se um número pertence à lista
int pertence(int procurado, struct lista *inicio) {
    struct lista *atual = inicio; 
    
    while(atual != NULL && atual->valor <= procurado){
        if (atual->valor == procurado){
            return 1;
        }
        atual = atual->prox;
    }
    return 0;
}

// b. Inserir um novo elemento na lista mantendo a ordem; 
void insere(int valor, struct lista **inicio) {
    struct lista *novo = (struct lista*) malloc(sizeof(struct lista));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }
    novo->valor = valor;
    novo->prox = NULL;

    if (*inicio == NULL || valor < (*inicio)->valor) {
        novo->prox = *inicio; 
        *inicio = novo;       
        return;               
    }

    struct lista *atual = *inicio;
    while (atual->prox != NULL && atual->prox->valor < valor) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
}

// c. Remover um elemento da lista; 
void remove_elemento(int removido, struct lista **inicio) {
    if (*inicio == NULL) {
        puts("Lista vazia!");
        return;
    }

    struct lista *atual = *inicio;
    struct lista *aux;

    // Elemento no início
    if (atual->valor == removido) {
        *inicio = atual->prox; 
        free(atual);           
        return;
    }

    // Elemento não está no início
    while (atual->prox != NULL && atual->prox->valor != removido) {
        atual = atual->prox;
    }

    // Prox é null
    if (atual->prox == NULL) {
        puts("Elemento não existe");
        return;
    }

    aux = atual->prox;      
    atual->prox = aux->prox;
    free(aux);              
}

// d. Imprimir os valores da lista; 
void imprime(struct lista *inicio) {
    struct lista *atual = inicio;

    while (atual != NULL) {
        printf("%d \n", atual->valor); 
        atual = atual->prox;            
    }
}

// e. Copiar uma lista L1 para uma lista L2; 
void copia(struct lista *origem, struct lista **destino){
    struct lista *atual = origem;
    while(atual!=NULL){
        insere(atual->valor, destino);
        atual = atual->prox;
    }
}

// f. Juntar L1 e L2 ordenadas em L3, fazendo com que L3 resultante também esteja ordenadas.
void junta(struct lista *l1, struct lista *l2, struct lista **destino){
    copia(l1, destino);
    copia(l2, destino);
}
