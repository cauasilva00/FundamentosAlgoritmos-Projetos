#include <stdio.h>

int main()
{
    int vetor1[4] = {1,0,0,0};
    int vetor2[4] = {0,1,0,0};
    int vetor3[4] = {0,0,1,0};
    int vetor4[4] = {0,0,0,1};
    
    int matriz[4][4];
    
    for (int i = 0; i < 4; i++) {
        matriz[0][i] = vetor1[i];
    }
    
    for (int i = 0; i < 4; i++) {
        matriz[1][i] = vetor2[i];
    }
    
    for (int i = 0; i < 4; i++) {
        matriz[2][i] = vetor3[i];
    }
    
    for (int i = 0; i < 4; i++) {
        matriz[3][i] = vetor4[i];
    }
    
    printf("Matriz identidade:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}