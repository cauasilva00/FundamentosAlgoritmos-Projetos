#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dadoUsuario, sorteio;
    
    printf("Quantos faces voce quer que tenha se dado?\n");
    printf("4, 6, 8, 10, 12 ou 16? ");
    scanf("%d", &dadoUsuario);
    
    srand(time(0));
    
    switch(dadoUsuario) 
    {
        case 4:
            sorteio = 1 + rand() % (4 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 4 faces foi %d! ", sorteio);
            break;
        case 6:                sorteio = 1 + rand() % (6 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 6 faces foi %d! ", sorteio);
            break;
        case 8:
            sorteio = 1 + rand() % (8 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 8 faces foi %d! ", sorteio);
            break;
        case 10:
            sorteio = 1 + rand() % (10 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 10 faces foi %d! ", sorteio);
            break;
        case 12:
            sorteio = 1 + rand() % (12 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 12 faces foi %d! ", sorteio);
            break;
        case 16:
            sorteio = 1 + rand() % (16 - 1 + 1);
            printf("Seu resultado do sorteio no dado de 16 faces foi %d! ", sorteio);
            break;
    }
    return 0;
}