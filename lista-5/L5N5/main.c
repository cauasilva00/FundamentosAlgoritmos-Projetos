#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dias 30

int main()
{
    int litros[dias], soma = 0, maior, menor = 500, produto = 1, diaMaior, diaMenor;

    srand(time(NULL));

    for(int i=0; i<dias; i++) {
        litros[i] = rand() % 401 + 100;
        soma += litros[i];
        
        if (litros[i] > maior) {
            maior = litros[i];
            diaMaior = i + 1;
        }
        if (litros[i] < menor) {
            menor = litros[i];
            diaMenor = i + 1;
        }
        
        printf("Dia %d: %d litros\n", i + 1, litros[i]);
    }
    
    printf("o total de litros gasto é %d\n", soma);
    printf("a média diária de gasto em litros é %d\n", soma / dias);
    
    printf("o dia com maior consumo foi o %dº dia\n", diaMaior);
    printf("o dia com menor consumo foi o %dº dia", diaMenor);
    return 0;
}