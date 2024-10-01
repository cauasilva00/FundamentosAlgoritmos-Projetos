/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float grauA, grauB, grauC, total1, escolha, total2;
    
    printf("Qual foi sua nota no grau A? ");
    scanf("%f", &grauA);
    
    printf("Qual foi sua nota no grau B? ");
    scanf("%f", &grauB);
    
    total1 = grauA * 0.33 + grauB * 0.67;
    
    if(total1 >= 6)
    {
        printf("Você passou por média! Sua nota foi %.2f", total1);
    }
    else
    {
        printf("Você ficou de recuperação.\n");
        
        printf("Qual foi sua nota do grau C?\n");
        scanf("%f", &grauC);
        
        printf("Você quer substituir a nota de qual Grau?\n");
        printf("Grau A [1]\n");
        printf("Grau B [2]\n");
        scanf("%f", &escolha);
        
        
        if(escolha = 1)
        {
            total2 = grauC * 0.33 + grauB * 0.67;
            
            if(total2 >= 6)
            {
                printf("Você passou sua nota foi %.2f", total2);
            }
            else
            {
                printf("Você rodou sua nota foi %.2f", total2);
            }
        }
        else
        {
            total2 = grauA * 0.33 + grauC * 0.67;
            
            if(total2 >= 6)
            {
                printf("Você passou sua nota foi %.2f", total2);
            }
            else
            {
                printf("Você rodou sua nota foi %.2f", total2);
            }
        }
        
    }
    
    return 0;
}
