#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dadovezes, resultado[6] = {0};

    printf("Quantas vezes quer lançar o dado? ");
    scanf("%d", &dadovezes);

    srand(time(NULL));

    for (int i = 0; i < dadovezes; i++) {
        resultado[rand() % 6]++;
    }

    printf("\nPercentual de cada face:\n");
    for (int i = 0; i < 6; i++) {
        printf("Face %d: %.2f%%\n", i + 1, (double)resultado[i] / dadovezes * 100);
    }

    return 0;
}
