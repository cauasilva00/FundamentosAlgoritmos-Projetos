#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    
    printf("Quantos graus celsius está fazendo? ");
    scanf("%f", &celsius);
    
    fahrenheit = celsius * 9 / 5 + 32;
    
    printf("Uma temperatura de %f graus celsius equivale a %f de fahrenheits", celsius, fahrenheit);
    

    return 0;
}
