#include <stdio.h>
#include <stdlib.h>

struct alunos
{
    char nome[50];
    float nota;
};

void alocar_memoria(struct estrutura**endereco, int quantidade){
    *endereco =(struct estrutura *)malloc(quantidade * sizeof(struct estrutura *));
    if (*endereco == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
}

void adicionar_alunos(struct alunos*aluno, int quantidade_alunos){
    for (int i = 0; i<quantidade_alunos; i++){
        printf("Insira o nome do aluno %d: \n", &i + 1);
        // implementar fgets

        printf("Insira a nota do aluno %d: \n", &i + 1);
        scanf("%f", &aluno[i].nota);
    }
}

void exibir_aprovados(struct alunos*aluno, int quantidade_alunos){
    for (int i = 0; i<quantidade_alunos; i++){
        
    }
}
int main(void){
    struct alunos *aluno;
    int quantidade_alunos;

    printf("Insira a quantidade de alunos: \n");
    scanf("%d", &quantidade_alunos);

    alocar_memoria(aluno, quantidade_alunos);
    adicionar_alunos(aluno, quantidade_alunos);
}