// 📝 Especificações:
// O programa deve:

// Ler o tamanho do vetor.

// Alocar dinamicamente o vetor com malloc.

// Ler os valores do vetor.

// Perguntar ao usuário se quer:

// Dobrar os valores

// Calcular o quadrado dos valores

// Usar uma função chamada aplicaOperacao que:

// Recebe o vetor, tamanho e ponteiro para função que realiza a operação.

// Aplica a operação usando ponteiros (sem usar índices).

// Exibir o vetor resultante.

// Liberar a memória alocada com free.
#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", vetor + i);
    }
}

int escolher_operacao()
{
    int op;
    puts("Qual operação deseja realizar?");
    puts("1- Quadrado dos valores");
    puts("2- Dobro dos valores");
    scanf("%d", &op);
    return op;
}

int realizar_op(int *vetor, int tamanho, int op)
{
    if (op == 1)
    { // quadrado
        for (int i = 0; i < tamanho; i++)
        {
            *vetor = (*vetor) * (*vetor);
            vetor++;
        }
        return 0;
    }

    for (int i = 0; i < tamanho; i++)
    {
        *vetor = (*vetor) * 2;
        vetor++;
    }
    return 0;
}

int main(void)
{
    int tamanho;
    puts("insira o tamanho do vetor");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    preencher_vetor(vetor, tamanho);
    
    puts("Valores do vetor:");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    puts(" ");
    realizar_op(vetor, tamanho, escolher_operacao());

    puts(" ");
    puts("Vetor após operações: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    free(vetor);
}