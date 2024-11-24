#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float matriz[10][3];
    float linhas = 10, colunas = 3, numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10;
    
    srand(time(NULL));
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = ((float)rand() / RAND_MAX) * 10.0;
            numero1 = (matriz[0][0]) * 0.33 + (matriz[0][1]) * 0.67;
            matriz[0][2] = numero1;
            numero2 = (matriz[1][0]) * 0.33 + (matriz[1][1]) * 0.67;
            matriz[1][2] = numero2;
            numero3 = (matriz[2][0]) * 0.33 + (matriz[2][1]) * 0.67;
            matriz[2][2] = numero3;
            numero4 = (matriz[3][0]) * 0.33 + (matriz[3][1]) * 0.67;
            matriz[3][2] = numero4;
            numero5 = (matriz[4][0]) * 0.33 + (matriz[4][1]) * 0.67;
            matriz[4][2] = numero5;
            numero6 = (matriz[5][0]) * 0.33 + (matriz[5][1]) * 0.67;
            matriz[5][2] = numero6;
            numero7 = (matriz[6][0]) * 0.33 + (matriz[6][1]) * 0.67;
            matriz[6][2] = numero7;
            numero8 = (matriz[7][0]) * 0.33 + (matriz[7][1]) * 0.67;
            matriz[7][2] = numero8;
            numero9 = (matriz[8][0]) * 0.33 + (matriz[8][1]) * 0.67;
            matriz[8][2] = numero9;
            numero10 = (matriz[9][0]) * 0.33 + (matriz[9][1]) * 0.67;
            matriz[9][2] = numero10;
        }
    }
    
    
    
    printf("%-10s %-10s %-10s\n", "Coluna 1", "Coluna 2", "Coluna 3");
    printf("------------------------------------\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%-10.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}