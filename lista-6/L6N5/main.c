#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    int linhas = 4, colunas = 6;

    int soma1 = 0, soma2 = 0, soma4 = 0, soma6 = 0, soma7 = 0, soma8 = 0, soma9 = 0, soma10 = 0, soma11 = 0, soma12 = 0;

    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        matriz[0][i] = -10 + rand() % 21;
        matriz[1][i] = -10 + rand() % 21;
        soma1 += matriz[1][i];

        matriz[2][i] = -10 + rand() % 21;
        matriz[3][i] = -10 + rand() % 21;

        soma10 += matriz[0][i];
        soma11 += matriz[2][i];

        soma4 += matriz[0][i] * matriz[3][i];
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        soma2 += matriz[i][4];
    }

    for (int i = 0; i < linhas; i++) {
        soma6 += matriz[i][0];
        soma7 += matriz[i][2];
        soma8 += matriz[i][4];
    }
    soma9 = soma6 + soma7 + soma8;

    for (int j = 0; j < colunas; j++) {
        soma12 += matriz[0][j];
        soma12 += matriz[2][j];
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("\nA soma da segunda linha é %d", soma1);
    printf("\nA soma da quinta coluna é %d", soma2);
    printf("\nA soma dos elementos da 1ª vezes a 4ª coluna é %d", soma4);
    printf("\nA soma dos elementos das colunas pares é %d", soma9);
    printf("\nA soma dos elementos das linhas ímpares é %d", soma12);
    printf("\nO maior valor da matriz é: %d", maior);
    printf("\nO menor valor da matriz é: %d", menor);

    return 0;
}
