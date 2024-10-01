#include <stdio.h>

int main()
{
    int resposta, certa;
    
    printf(" ?\n 1)\n 2)\n 3)\n 4)\n 5)\n ");
    scanf("%d", &resposta);
    
    certa = 1;
    
    if(resposta != certa) {
        printf("Errado");
    }
    else{
        printf("Certo");
    }
    
    return 0;
}