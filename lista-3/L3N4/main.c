#include <stdio.h>

int main()
{
    int numeroUsuario, divisao3;
    
    printf("Qual seu número inteiro? ");
    scanf("%d", &numeroUsuario);
    
    divisao3 = numeroUsuario / 3;
    
    if(numeroUsuario % 3 != 0)
    {
        printf("O seu número não é divisível por 3");
    }
    else
    {
        printf("O seu número é divisível por 3, o resultado é %d.", divisao3);
    }
    

    return 0;
}
