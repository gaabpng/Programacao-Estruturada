//loop infinito de troca de elemento de vetores
#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void imprimir_vetor(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

void troca_vetor(int *vetor, int ind1, int ind2){
    int aux = *(vetor + ind1);
    *(vetor + ind1) = *(vetor + ind2);
    *(vetor + ind2) = aux;
}

int loop(int *vetor, int tamanho){
    while (1){
        imprimir_vetor(vetor, tamanho);
        
        int ind1, ind2;
        printf("\nInsira o indice do primeiro elemento que deseja trocar: (-1 para sair)");
        scanf("%d", &ind1);

        if (ind1 == -1){
            puts("Execucao encerrada ");
            return 0;
        }

        printf("\nInsira o indice do segundo elemento que deseja trocar: ");
        scanf("%d", &ind2);

        if((ind1 >= 0 && ind1 <= tamanho-1) && (ind2 >= 0 && ind2 <= tamanho-1) && ind1 != ind2)
            troca_vetor(vetor, ind1, ind2);
        else{
            puts("Indices invalidos! ");
        }
    }
}

int main(void){
    int tamanho;
    
    puts("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);
    puts(" ");

    int *vetor = (int*)malloc(tamanho * sizeof(int));

    preencher_vetor(vetor, tamanho);
    loop(vetor, tamanho);

    free(vetor);

    return 0;
}