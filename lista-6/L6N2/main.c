#include <stdio.h>

int main()
{
    int vetor1[5] = {1,5,9,2,5};
    int vetor2[5] = {7,4,13,21,6};
    int vetor3[5] = {8,-3,5,7,12};
    
    int matriz[3][5];
    
    for (int i = 0; i < 5; i++) {
        matriz[0][i] = vetor1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        matriz[1][i] = vetor2[i];
    }
    
    for (int i = 0; i < 5; i++) {
        matriz[2][i] = vetor3[i];
    }
    
    printf("Matriz 3x5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j] * 7);
        }
        printf("\n");
    }

    return 0;
}