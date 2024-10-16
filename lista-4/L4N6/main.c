#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor, menor, maior, soma = 0;
    float media;

    srand(time(0));

    for (int i = 0; i < 5; i++) {
        valor = rand() % (100 - 0 + 1);
        soma += valor;

        if (i == 0) {
            menor = maior = valor;
        } else {
            if (valor < menor) menor = valor;
            if (valor > maior) maior = valor;
        }
    }

    media = soma / 5.0;

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
