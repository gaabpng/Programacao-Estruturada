// 11. Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e
// escrever quantos salários mínimos ganha o funcionário.

#include <stdio.h>

int main(void){
    float Salario_minimo, Salario_funcionario;
    
    scanf("%f", &Salario_minimo);
    scanf("%f", &Salario_funcionario);
    
    float total_salarios;
    total_salarios = Salario_funcionario / Salario_minimo;
    printf("%f", total_salarios);

    return 0;
}