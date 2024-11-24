#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5];
    int linhas = 5, colunas = 5;
    
    srand(time(NULL));
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int sorteio = (rand() << 16) | rand();
            
            if(sorteio > 0) {
                matriz[i][j] = (sorteio * (-2)) / 2;
            } else {
                matriz[i][j] = (sorteio * (-2)) / 2;
            }
            
        }
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%16d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}