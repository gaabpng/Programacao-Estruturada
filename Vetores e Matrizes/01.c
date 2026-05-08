#include <stdio.h>
#include <stdlib.h>

int main(void){
    int jogadores[24] = {0}; 
    int voto, votos_computados = 0;
    float percentual[24] = {0.0};
    
    printf("Insira o seu voto (0 para encerrar): ");
    scanf("%d", &voto);

    while (voto != 0){
        jogadores[voto]++; 
        votos_computados++; 
        printf("Insira o seu voto (0 para encerrar): ");
        scanf("%d", &voto);
    }

    int maior_votos = 0;
    int jogador_vencedor = 0;
    
    printf("\nResultado da Votacao:\n");
    printf("Foram computados %d votos.\n", votos_computados);
    printf("Jogador | Votos | Percentual \n");

    for(int i = 1; i <= 23; i++){
        percentual[i] = ((jogadores[i] * 1.0) / votos_computados) * 100;
        
        printf("%d | %d | %.2f \n", i, jogadores[i], percentual[i]);
        if(jogadores[i] > maior_votos) {
            maior_votos = jogadores[i]; 
            jogador_vencedor = i;       
        }
    
    }

    printf("\nJogador com mais votos = %d (com %d votos)\n", jogador_vencedor, maior_votos);
    
    return 0;
}