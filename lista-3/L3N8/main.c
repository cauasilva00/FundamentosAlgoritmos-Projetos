#include <stdio.h>

int main()
{
    float valor, lucro;
    
    printf("Qual o valor da compra? ");
    scanf("%f", &valor);
    
    if(valor <= 20)
    {
        lucro = valor * 0.45;
        printf("O valor do seu lucro para um produto de R$%.2f vai ser %.2f", valor, lucro);
    }
    
    if(50 > valor && valor > 20)
    {
        lucro = valor * 0.35;
        printf("O valor do seu lucro para um produto de R$%.2f vai ser %.2f", valor, lucro);
    }
    
    if(50 <= valor)
    {
        lucro = valor * 0.25;
        printf("O valor do seu lucro para um produto de R$%.2f vai ser %.2f", valor, lucro);
    }
    

    return 0;
}
