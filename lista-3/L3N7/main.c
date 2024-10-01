#include <stdio.h>

int main()
{
    float salario, desconto, salariocomdesconto;
    
    printf("Qual seu salário? ");
    scanf("%f", &salario);
    
    desconto = (salario * 0.11);
    
    if(desconto < 318.20)
    {
        salariocomdesconto = salario - desconto;
        printf("Seu salário descontado é %.2f", salariocomdesconto);
    }
    else
    {
        salariocomdesconto = salario - 318.20;
        printf("Seu salário descontado é %.2f", salariocomdesconto);
    }
    
    return 0;
}
