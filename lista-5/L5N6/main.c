#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define jogadores 4

int main()
{
    int pontos[jogadores], rodadas=5, maior, soma, jogMaior, ponttotal[jogadores];

    srand(time(NULL));
    for(int i=0; i < rodadas; i++) {
        printf("\n%dº rodada\n", i + 1);
        for(int i=0; i<jogadores; i++) {
            pontos[i] = 0 + rand() % (100 - 0 + 1);
            
            ponttotal[i] += pontos[i];
            
            if (ponttotal[i] > maior) {
                maior = ponttotal[i];
                jogMaior = i + 1;
            }
            printf("Jogador %d: %d pontos\n", i + 1, pontos[i]);
            if(pontos[i] > 80) {
                80 < pontos[i];
                printf("Rodada Destaque\n");
            }
            
        printf("Total acumulado = %d\n", ponttotal[i]);
        }
    }
    
    printf("\no jogador vencedor foi o %dº jogador\n", jogMaior);
    
    return 0;
}