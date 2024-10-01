#include <stdio.h>

int main()
{
    float minutos, segundos;
    
    printf("Digite um valor de minutos: ");
    scanf("%f",&minutos);
    segundos = minutos * 60;
    printf("%f minutos corresponde a %f segundos.",minutos,segundos);
    
    return 0;
}