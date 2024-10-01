#include <stdio.h>

int main()
{
    float notaA, notaB, notaC, notaTotal;
    printf("Essa é uma calculadora de notas da UNISINOS. \n");
    
    printf("Qual foi sua nota do Grau A? ");
    scanf("%f", &notaA);
    
    printf("Qual foi sua nota do Grau B? ");
    scanf("%f", &notaB);
    
    notaTotal = (notaA * 1 + notaB * 2) /3;
    
    if(notaTotal != 6)
    {
        printf ("Você foi reprovado. Sua nota foi %f!", notaTotal);
    }
    else
    {
        printf("Parabéns você Passou! Sua nota foi %f!", notaTotal);
    }
    return 0;
}