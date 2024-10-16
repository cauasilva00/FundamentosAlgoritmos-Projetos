#include <stdio.h>

int main()
{
    int pessoas;
    printf("Quantos pessoas precisam ter a suas notas calculadas: ");
    scanf("%d", &pessoas);
    
    float grauA, grauB, grauC, total1, escolha, total2, media;
    
    for (int i = 1; i <= pessoas; i++) {
        printf("\nQual foi sua nota no grau A? ");
        scanf("%f", &grauA);
        
        printf("\nQual foi sua nota no grau B? ");
        scanf("%f", &grauB);
        
        total1 = grauA * 0.33 + grauB * 0.67;
        
        if(total1 >= 6)
        {
            printf("\nVocê passou por média! Sua nota foi %.2f", total1);
        }
        else
        {
            printf("\nVocê ficou de recuperação.\n");
            
            printf("\nQual foi sua nota do grau C?\n");
            scanf("%f", &grauC);
            
            printf("\nVocê quer substituir a nota de qual Grau?\n");
            printf("Grau A [1]\n");
            printf("Grau B [2]\n");
            scanf("%f", &escolha);
            
            if(escolha = 1)
            {
                total2 = grauC * 0.33 + grauB * 0.67;
                
                if(total2 >= 6)
                {
                    printf("\nVocê passou sua nota foi %.2f", total2);
                }
                else
                {
                    printf("\nVocê rodou sua nota foi %.2f", total2);
                }
            }
            else
            {
                total2 = grauA * 0.33 + grauC * 0.67;
                
                if(total2 >= 6)
                {
                    printf("\nVocê passou sua nota foi %.2f", total2);
                }
                else
                {
                    printf("\nVocê rodou sua nota foi %.2f", total2);
                }
            }
        }
        media += (total1 + total2) / pessoas;
    }
    printf("\nA média dos alunos foi %.2f", media);
    
    return 0;
}
