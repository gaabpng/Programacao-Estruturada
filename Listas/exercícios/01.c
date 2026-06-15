// 1) Considere uma coleção de nomes de sites da web e seus respectivos links na Internet
// armazenados através de uma lista simplesmente encadeada. Implemente uma função que,
// dado o nome de um site, busque o seu link correspondente na lista e ao mesmo tempo
// mova o nó que contém o nome buscado para o início da lista, de forma que ele possa ser
// encontrado mais rapidamente na próxima vez que for buscado.
#include <stdio.h>
#include <string.h>

struct sites{
    char nome[50];
    char url[200];
    int *prox
};

char* procura(char site[50], struct sites **inicio) {
    if (*inicio == NULL) {
        return NULL;
    }

    struct sites *atual = *inicio; 
    struct sites *anterior = NULL; 

    while (atual != NULL && strcmp(atual->nome, site) != 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        return NULL;
    }

    char *url_encontrada = atual->url;

    if (anterior != NULL) { // Se o elemento não é o primeiro
        anterior->prox = atual->prox; 
        atual->prox = *inicio;        
        *inicio = atual;              
    }

    return url_encontrada;
}

int main(void){
        struct sites *minha_lista = NULL; 
}