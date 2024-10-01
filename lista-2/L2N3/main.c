#include <stdio.h>

int main()
{
    float pesoPrato, valorTotal;
    printf("Qual o peso do seu prato, em kg? ");
    scanf("%f", &pesoPrato);
    
    valorTotal = pesoPrato * 40;
    printf ("O valor do seu prato deu %f, visto ele pesou %fKg",valorTotal,pesoPrato);
    
    
    return 0;
}