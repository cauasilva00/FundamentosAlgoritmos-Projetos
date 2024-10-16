#include <stdio.h>

int main()
{
    int divisor;
    printf("Entre com um valor do divisor: ");
    scanf("%d", &divisor);
    
    int inicio;
    printf("Entre com o início do intervalo: ");
    scanf("%d", &inicio);
    
    int final;
    printf("Entre com o final do intervalo: ");
    scanf("%d", &final);
    
    printf("Os números divisíveis por %d nesse intervalo são: ", divisor);
    for (int i = inicio; i <= final; i++) {
        if(i % divisor == 0) {
            printf("%d, ", i);
        }
    }

    return 0;
}