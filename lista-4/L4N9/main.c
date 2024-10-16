#include <stdio.h>

int main()
{
    int num;
    printf("Entre com um número: ");
    scanf("%d", &num);
    
    char cara;
    printf("Entre com um caractere: ");
    scanf(" %c", &cara);
    
    for (int i = 1; i <= num; i++) {
        for (int p = 1; p <= i; p++) {
            printf("%c ", cara);
        }
        printf("\n");
    }

    return 0;
}