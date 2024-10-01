#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int ImparouPar, numeroUsuario, numeroAleatorio, somaTotal;
    
    printf("Qual sua aposta, [1] ÍMPAR ou [2] PAR? ");
    scanf("%d", &ImparouPar);
    
    srand(time(NULL));
    
    printf("Digite um número de 0 a 5 - ");
    scanf("%d", &numeroUsuario);
    
    numeroAleatorio = rand() % 6;
    
    printf("O número aleatório é %d\n", numeroAleatorio);
    
    somaTotal = numeroUsuario + numeroAleatorio;
    
    if((somaTotal + ImparouPar) % 2 != 0)
    {
        printf("Não foi dessa vez, você perdeu");
    }
    else
    {
        printf("Parabens, sua soma deu sua escolha!");
    }
    

    return 0;
}
