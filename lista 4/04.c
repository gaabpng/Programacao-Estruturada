// Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica.
// Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente. O
// programa deve apresentar no final:
// • a média de preço dos serviços prestados,
// • os nomes dos clientes que pagaram por serviços acima da média calculada;
// • o nome do cliente que pagou pelo serviço mais caro.

#include <stdio.h>
#include <stdlib.h>

struct servicos{
    int id;
    float valor;
    int tipo;
    char nome_cliente[50];
};

void preencher(struct servicos * servico, int quantidade_servicos){
    for (int i = 0; i < quantidade_servicos; i++){
        servico[i].id = i+1;

        printf("Qual o valor do servico %d: \n", i+1);
        scanf("%f", &servico[i].valor);

        printf("Qual o tipo do servico %d: \n", i+1);
        scanf("%d", &servico[i].tipo);
        

        printf("Qual o nome do cliente do servico %d: \n", i+1);
        fgets(servico[i].nome_cliente, 50, stdin);
    }
}

void media_servicos(struct servicos * servico, int quantidade_servicos){
    
}

int main (void){
    struct servicos * servico;
    int quantidade_servicos;

    printf("Digite o número de ordens de serviço: ");
    scanf("%d", &quantidade_servicos);

    servico = (struct servicos *)malloc(quantidade_servicos * sizeof(struct servicos));
    
    preencher(servico, quantidade_servicos);
}