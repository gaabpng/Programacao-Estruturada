#include <stdio.h>
#include <stdlib.h> // Necessário para malloc

struct alunos
{
    char nome[50];
    float nota;
};

void adicionar_alunos(struct alunos *aluno, int quantidade_alunos)
{
    for (int i = 0; i < quantidade_alunos; i++)
    {
        printf("Insira o nome do aluno %d: \n", i + 1);
        getchar(); // Limpa o buffer antes de ler o nome
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Insira a nota do aluno %d: \n", i + 1);
        scanf("%f", &aluno[i].nota);
    }
}

void alunos_aprovados(struct alunos *aluno, int quantidade_alunos)
{
    printf("\nAlunos aprovados:\n");
    for (int i = 0; i < quantidade_alunos; i++)
    {
        if (aluno[i].nota > 6)
        {
            printf("%s\n", aluno[i].nome);
        }
    }
}

int main()
{
    struct alunos *aluno;
    int quantidade_alunos;

    printf("Insira a quantidade de alunos: \n");
    scanf("%d", &quantidade_alunos);

    // Aloca memória suficiente para armazenar todos os alunos
    aluno = (struct alunos *)malloc(quantidade_alunos * sizeof(struct alunos));
    if (aluno == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Encerra o programa com erro
    }

    adicionar_alunos(aluno, quantidade_alunos);
    alunos_aprovados(aluno, quantidade_alunos);

    // Libera a memória alocada
    free(aluno);

    return 0;
}
