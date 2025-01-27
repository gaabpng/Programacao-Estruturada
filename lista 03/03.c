#include <stdio.h>

void preencher_salarios(int qtdd_funcionarios, float salarios[qtdd_funcionarios]){
    for (int i = 0; i<qtdd_funcionarios; i++){
        scanf("%f", &salarios[i]);
    }
}

float calcular_media(int qtdd_funcionarios, float salarios[qtdd_funcionarios]){
    float media = 0; 
    for (int i = 0; i<qtdd_funcionarios; i++){
        media = media + salarios[i];
    }
    media = media/qtdd_funcionarios;
    return media;
}

void calcular_acima_da_media(int qtdd_funcionarios, float salarios[qtdd_funcionarios], float media){
    int acima_da_media = 0;
    for (int i = 0; i<qtdd_funcionarios; i++){
        if (salarios[i]>media){
            acima_da_media++;
        }
    }
    printf("%d", acima_da_media);
}

int main(void){
    int qtdd_funcionarios;

    printf("Insira quantos funcionários tem na empresa");
    scanf("%d", &qtdd_funcionarios);

    float salarios[qtdd_funcionarios];
    preencher_salarios(qtdd_funcionarios, salarios);

    float media = calcular_media(qtdd_funcionarios, salarios);
    
    calcular_acima_da_media(qtdd_funcionarios, salarios, media);
}