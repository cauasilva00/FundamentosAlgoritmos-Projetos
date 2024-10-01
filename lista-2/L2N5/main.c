#include <stdio.h>

int main()
{
    float precoGasolina, valorAbastecer, precoTotal;
    
    printf("Qual o preço do litro da gasolina? ");
    scanf("%f", &precoGasolina);
    
    printf("Qual o seu valor disponível pra abastecer? ");
    scanf("%f", &valorAbastecer);
    
    precoTotal = valorAbastecer / precoGasolina;
    
    printf ("Com seu valor de %f, sera possível abstecer %f, a uma cotação de %f", valorAbastecer, precoTotal, precoGasolina);

    return 0;
}