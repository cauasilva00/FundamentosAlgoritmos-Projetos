#include <stdio.h>

int main()
{
    int resposta, certa;
    
    printf(" Qual é o verdadeiro nome do super-herói Batman?\n 1) Bruce Wayne\n 2) Clark Kent\n 3) Peter Parker\n 4) Tony Stark\n 5) Steve Rogers\n ");
    scanf("%d", &resposta);
    
    certa = 1;
    
    if(resposta != certa) {
        printf("Sua resposta está errada!");
    }
    else{
        printf("Sua resposta está certa!");
    }
    
    return 0;
}
