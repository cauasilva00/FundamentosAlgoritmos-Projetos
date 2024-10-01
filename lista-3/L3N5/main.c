#include <stdio.h>

int main()
{
    int numUsuario;
    
    printf("Qual seu número inteiro? ");
    scanf("%d", &numUsuario);
    
    if(numUsuario % 2 != 0)
    {
        printf("Seu número %d é Ímpar!", numUsuario);
    } 
    else
    {
        printf("Seu número %d é Par!", numUsuario);
    }

    return 0;
}
