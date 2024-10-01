#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, soma1;
    
    printf("Qual seu primeiro número? ");
    scanf("%f", &numero1);
    
    printf("Qual seu segundo número? ");
    scanf("%f", &numero2);
    
    printf("Qual seu terceiro número? ");
    scanf("%f", &numero3);
    
    soma1 = numero1 + numero2 + numero3;
    
    if(numero1 + numero2 > numero1 + numero3)
    {
        printf("Sua soma é igual a %.2f!", soma1);
    }
    else
    {
        printf("Conta não autorizada.");
    }
    
    return 0;
}