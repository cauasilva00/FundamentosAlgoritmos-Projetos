#include <stdio.h>

int main()
{
    char resposta;
    do{
        int numuser;
        printf("Qual seu número de 1 a 9? ");
        scanf("%d", &numuser);
        
        int cont1 = numuser * 1;
        int cont2 = numuser * 2;
        int cont3 = numuser * 3;
        int cont4 = numuser * 4;
        int cont5 = numuser * 5;
        int cont6 = numuser * 6;
        int cont7 = numuser * 7;
        int cont8 = numuser * 8;
        int cont9 = numuser * 9;
        int cont10 = numuser * 10;
        
        printf("%d * 1 = %d", numuser, cont1);
        printf("\n%d * 2 = %d", numuser, cont2);
        printf("\n%d * 3 = %d", numuser, cont3);
        printf("\n%d * 4 = %d", numuser, cont4);
        printf("\n%d * 5 = %d", numuser, cont5);
        printf("\n%d * 6 = %d", numuser, cont6);
        printf("\n%d * 7 = %d", numuser, cont7);
        printf("\n%d * 8 = %d", numuser, cont8);
        printf("\n%d * 9 = %d", numuser, cont9);
        printf("\n%d * 10 = %d", numuser, cont10);
        
        printf("\nCalcular um número (s/n)? ");
        scanf(" %c", &resposta);
    }
    while(resposta != 'n');
    
    printf("Fim do programa.");
    
    return 0;
}
