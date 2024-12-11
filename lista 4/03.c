#include <stdio.h>
#include <stdlib.h>

struct funcionarios{
    float salario;
    float vendas;
    float comissao;
};

void preencher (struct funcionarios * funcionario, int quantidade_funcionarios){
    float comissao_funcionario;
    for (int i = 0; i < quantidade_funcionarios; i++){
        comissao_funcionario = 0;
        printf("Insira o salário do funcionario %d: \n", i+1);
        scanf("%f", &funcionario[i].salario);

        printf("Insira as vendas do funcionario %d: \n", i+1);
        scanf("%d", &funcionario[i].vendas);

        comissao_funcionario = funcionario[i].vendas * 0.06;
        funcionario[i].comissao = comissao_funcionario;
    }
}

void salarios(struct funcionarios * funcionario, int quantidade_funcionarios){
    float salario_final;
    for (int i = 0; i < quantidade_funcionarios; i++){
        salario_final = funcionario[i].salario + funcionario[i].comissao;
        printf("O salário final do funcionário %d é %f", i+1 ,salario_final);
    }
}

int main (void){
    struct funcionarios * funcionario;
    int quantidade_funcionarios = 10;
    funcionario = (struct funcionarios *)malloc(quantidade_funcionarios * sizeof(struct funcionarios));
    preencher(funcionario, quantidade_funcionarios);
    salarios(funcionario, quantidade_funcionarios);
}