#include <stdio.h>

int main()
{
    int i, cont1, cont2;
    int numeros[10];
    
    cont1 = 0;
    cont2 = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            cont1++;
        } else {
            cont2++;
        }
    }
    
    printf("a quantidade de numeros pares é %d\n", cont1);
    printf("a quantidade de numeros impares é %d\n", cont2);
    
    return 0;
}