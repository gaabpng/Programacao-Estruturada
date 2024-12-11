#include <stdio.h>
#include <stdlib.h>
struct populacao{
    int idade;
    float salario;
    int filhos;
};

void preencher (struct populacao * pessoa, int tamanho_populacao){
    for (int i=0; i < tamanho_populacao; i++){
        printf("Insira a idade da pessoa %d: \n", i + 1);
        scanf("%d", &pessoa[i].idade);
    
        printf("Insira o salario da pessoa %d: \n", i + 1);
        scanf("%f", &pessoa[i].salario);
    
        printf("Insira a quantidade de filhos da pessoa %d: \n", i + 1);
        scanf("%d", &pessoa[i].filhos);
    }
}

void media_salario (struct populacao * pessoa, int tamanho_populacao){
    float media_salarios = 0;
    for (int i = 0; i < tamanho_populacao; i++){
        media_salarios = media_salarios + pessoa[i].salario;
    }
    media_salarios = media_salarios / tamanho_populacao;
    printf("Média dos salarios: %f\n", media_salarios);
}

void media_filhos (struct populacao * pessoa, int tamanho_populacao){
    float media_filhos = 0;
    for (int i = 0; i < tamanho_populacao; i++){
        media_filhos = media_filhos + pessoa[i].filhos;
    }
    media_filhos = media_filhos / tamanho_populacao;
    printf("Média dos filhos: %f\n", media_filhos);
}

void maior_salario(struct populacao * pessoa, int tamanho_populacao){
    float saldo = 0;
    saldo = pessoa[0].salario;
    for (int i = 0; i < tamanho_populacao; i++){
        if (saldo < pessoa[i].salario){
            saldo = pessoa[i].salario;
        }
    }
    printf("Maior salario: %f\n", saldo);
}

int main(void){
    int tamanho_populacao = 20;
    struct populacao * pessoa;
    pessoa = (struct populacao *) malloc(sizeof(struct populacao));

    preencher(pessoa, tamanho_populacao);
    media_filhos(pessoa, tamanho_populacao);
    media_salario(pessoa, tamanho_populacao);
    maior_salario(pessoa, tamanho_populacao);
}