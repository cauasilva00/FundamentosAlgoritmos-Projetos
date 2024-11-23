#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho = 10;
    
    int v[tamanho], vpar[tamanho], vimpar[tamanho];
    int soma = 0, produto = 1, maior, menor;
    int contpar = 0, contimpar = 0;
    int encontrar50 = 0, vezes50 = 0;

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        v[i] = 10 + rand() % (90 - 10 + 1);
    }

    printf("vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    maior = menor = v[0];

    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
        produto *= v[i];

        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];

        if (v[i] == 50) {
            encontrar50 = 1;
            vezes50++;
        }

        if (v[i] % 2 == 0) {
            vpar[contpar++] = v[i];
        } else {
            vimpar[contimpar++] = v[i];
        }
    }

    printf("Existe o valor 50 no vetor? %s\n", vezes50 ? "Sim" : "Não");

    printf("Número de ocorrências do valor 50: %d\n", vezes50);

    printf("Média dos valores do vetor: %.2f\n", (float)soma / tamanho);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    printf("Soma dos valores: %d\n", soma);
    printf("Produto dos valores: %d\n", produto);

    printf("Vetor em ordem inversa: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    int vinverso[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vinverso[i] = v[tamanho] - 1 - i;
    }
    printf("Vetor copiado em ordem inversa: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vinverso[i]);
    }
    printf("\n");

    printf("Vetor de pares: ");
    for (int i = 0; i < contpar; i++) {
        printf("%d ", vpar[i]);
    }
    printf("\n");

    printf("Vetor de ímpares: ");
    for (int i = 0; i < contimpar; i++) {
        printf("%d ", vimpar[i]);
    }
    printf("\n");

    return 0;
}
