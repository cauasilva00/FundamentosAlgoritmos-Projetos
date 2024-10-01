#include <stdio.h>

int main()
{
    float dividendo, divisor, resultado;
    
    printf("Qual seu divendo? ");
    scanf("%f", &dividendo);
    
    printf("Qual seu divisor? ");
    scanf("%f", &divisor);
    
    resultado = dividendo / divisor;
    
    if(divisor != 0)
    {
        printf("O resultado da sua divisão é %.2f!", resultado);
    }
    
    printf("Sua divisão foi inválida porque seu divisor é zero!");
    
    return 0;
}