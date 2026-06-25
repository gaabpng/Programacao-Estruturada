#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos{
    int chave;
    char aluno[100];
    struct alunos *pre;
    struct alunos *prox;
}alunos;

alunos *mescla(alunos *lista1, alunos *lista2){
    alunos *resultante = (alunos*) malloc(sizeof(alunos));
    
    if (resultante == NULL) {
        printf("Erro de alocação!");
        return NULL;
    }
    
    resultante->prox = NULL;
    resultante->pre = NULL;

    alunos *aux1 = lista1->prox;
    alunos *aux2 = lista2->prox;

    alunos *atual_res = resultante;

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

void preenche(FILE *arquivo, alunos *lista){
    alunos *ultimo = lista;
    char buffer_char[100];
    int buffer_int;

    while(fscanf(arquivo, "%d %s", &buffer_int, buffer_char) == 2){
        alunos *novo = (alunos*)malloc(sizeof(alunos));
        if (novo == NULL) return; 

        strcpy(novo->aluno, buffer_char);
        novo->chave = buffer_int; 
        novo->prox = NULL;
        novo->pre = ultimo;
        ultimo->prox = novo;
        ultimo = novo;
    }
}

void limpa(alunos *lista){
    alunos *lixo = NULL;
    alunos *head = lista;

    while(head!=NULL){
        lixo = head;
        head = head->prox;
        free(lixo);
    }
}

int main(void){
    FILE *arquivo1, *arquivo2, *arquivo_saida;

    arquivo1 = fopen("arquivo1.txt", "r");
    arquivo2 = fopen("arquivo2.txt", "r");

    if(arquivo1 == NULL || arquivo2 == NULL){
        printf("Erro ao abrir os arquivos de entrada.\n");
        return 1;
    }

    alunos *lista1 = (alunos*)malloc(sizeof(alunos));
    alunos *lista2 = (alunos*)malloc(sizeof(alunos));
    
    lista1->pre = NULL;
    lista1->prox = NULL;
    lista2->pre = NULL;
    lista2->prox = NULL;

    preenche(arquivo1, lista1);
    preenche(arquivo2, lista2);

    fclose(arquivo1);
    fclose(arquivo2);

    alunos *lista_mescla = mescla(lista1, lista2);
    
    arquivo_saida = fopen("resultado.txt", "w");
    if(arquivo_saida == NULL){
        printf("Erro ao criar arquivo de saída.\n");
        return 1;
    }

    alunos *walk = lista_mescla->prox; 
    while(walk != NULL){
        fprintf(arquivo_saida, "%d %s\n", walk->chave, walk->aluno);
        printf("%d %s \n", walk->chave, walk->aluno);
        walk = walk->prox;
    }
    fclose(arquivo_saida);

    limpa(lista1);
    limpa(lista2);
    limpa(lista_mescla);

    return 0;
}