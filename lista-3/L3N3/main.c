#include <stdio.h>

int main()
{
    float numeroUsuario, dobroPositivo, triploNegativo;
    
    printf("Qual seu número? ");
    scanf("%f", &numeroUsuario);
    
    dobroPositivo = numeroUsuario * 2;
    triploNegativo = numeroUsuario * 3;
    
    if (numeroUsuario > 0)
    {
        printf("O dobro do seu número positivo é %.2f", dobroPositivo);
    }
    else
    {
        printf("O triplo do seu número negstivo é %.2f", triploNegativo);
    }

    return 0;
}