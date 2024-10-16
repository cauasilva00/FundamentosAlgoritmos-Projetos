#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    
    int tentativas = 3;
    
    int chances = 0;
    
    int numero;
    
    int sorteio;
    
    do {
        chances++;
        
        srand(time(NULL));
        sorteio = rand() % (10 - 1 + 1) + 1;
        
        printf("Qual o número de 1 a 10 sortado? ");
        scanf("%d", &numero);
        
        if(numero == sorteio) {
            printf("Você acertou!");
        }
        else {
            printf("Você errou.\n");
        }
    }
    while(numero != sorteio && chances < tentativas);

    return 0;
}