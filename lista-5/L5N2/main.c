#include <stdio.h>

int main()
{
    int tamanho = 5;
    
    int numeros[tamanho];
    int resultado[tamanho];
    
    for (int i=0; i<tamanho; i++) {
        printf("Qual seu numero da posiçao %d do vetor? ", i);
        scanf("%d", &numeros[i]);
    }
    
    for (int i=0; i<tamanho; i++) {
        resultado[i] = numeros[i] * i;
    }
    
    printf("Resultado do valor vezes a posição: ");
    for (int i=0; i<tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
