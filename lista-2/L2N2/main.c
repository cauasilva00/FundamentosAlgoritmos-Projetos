#include <stdio.h>

int main()
{
    float dolar, cotaçao, real;
    printf("Quantos dólares você quer? ");
    scanf("%f",&dolar);
    
    printf("Qual a cotação do dolar hoje? ");
    scanf("%f",&cotaçao);
    
    real = dolar * cotaçao;
    printf("Para adquirir %f, voce precisará de %f reais, a uma cotação de %f reais por dólar.",dolar,real,cotaçao);
    
    return 0;
}