#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int valor;
    struct Node* prox;
} Node;


int ehSubconjunto(Node* lst1, Node* lst2){
    if(lst2 == NULL)
        return 1; // lista vazia é subconjunto de qualquer lista

    if(lst1 == NULL)
        return 0;

    while(lst1 != NULL && lst2 != NULL){
        if (lst1->valor == lst2->valor) { // achou um elemento da lista 2
            lst1 = lst1->prox;
            lst2 = lst2->prox;
        }
        else if (lst1->valor < lst2->valor) { // não achou o inicio da lista 2
            lst1=lst1->prox;
        }
        else{ // não existe o inicio da lista 2
            return 0;
        }
    }
    if(lst2 == NULL) //terminou a lista 2
        return 1;
    return 0; // terminou a lista 1 mas não a lista 2
}


Node* carregarLista(const char* nomeArquivo) {
    FILE* arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo '%s'.\n", nomeArquivo);
        return NULL;
    }

    Node* inicio = NULL;
    Node* atual = NULL;
    int numero;

    while (fscanf(arquivo, "%d ", &numero) == 1) {
        Node* novoNo = (Node*)malloc(sizeof(Node));
        if (novoNo == NULL) {
            printf("Erro de alocacao de memoria.\n");
            fclose(arquivo);
            return inicio;
        }
        novoNo->valor = numero;
        novoNo->prox = NULL;

        if (inicio == NULL) {
            inicio = novoNo; 
        } else {
            atual->prox = novoNo; 
        }
        atual = novoNo; 
    }

    fclose(arquivo);
    return inicio;
}


void liberarLista(Node* inicio) {
    Node* atual = inicio;
    while (atual != NULL) {
        Node* proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}


int main() {

    const char* arquivo1 = "lista1.txt";
    const char* arquivo2 = "lista2.txt";

    Node* Lst1 = carregarLista(arquivo1);
    Node* Lst2 = carregarLista(arquivo2);

    printf("Listas carregadas com sucesso a partir dos arquivos!\n");

    if (ehSubconjunto(Lst1, Lst2)) {
        printf("Resultado: True (Lst2 eh subconjunto de Lst1)\n");
    } else {
        printf("Resultado: False (Lst2 nao eh subconjunto de Lst1)\n");
    }

    liberarLista(Lst1);
    liberarLista(Lst2);

    return 0;
}
