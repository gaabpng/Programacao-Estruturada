#include <stdio.h>

void preencher_notas(float notas[60], int alunos){
    for (int i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    return 0;
}

int main(void){
    int alunos = 60;
    float notas[alunos];

    preencher_notas(notas, alunos);

    int aprovados = 0;
    for (int i = 0; i < alunos; i++){
        if (notas[i] >= 6.0)
            aprovados++;
    }

    printf("Total de aprovados: %d", aprovados);
}