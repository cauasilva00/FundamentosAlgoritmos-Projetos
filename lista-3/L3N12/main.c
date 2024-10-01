#include <stdio.h>

int main()
{
    int idade, categoria;
    
    printf("Qual é a idade do nadador? ");
    scanf("%d", &idade);
    
    switch(idade)
    {
        case 5:
            printf("A categoria do nadador é INFANTIL A. ");
            break;
        case 6:
            printf("A categoria do nadador é INFANTIL A. ");
            break;
        case 7:
            printf("A categoria do nadador é INFANTIL A. ");
            break;
        case 8:
            printf("A categoria do nadador é INFANTIL B. ");
            break;
        case 9:
            printf("A categoria do nadador é INFANTIL B. ");
            break;
        case 10:
            printf("A categoria do nadador é INFANTIL B. ");
            break;
        case 11:
            printf("A categoria do nadador é JUVENIL A. ");
            break;
        case 12:
            printf("A categoria do nadador é JUVENIL A. ");
            break;
        case 13:
            printf("A categoria do nadador é JUVENIL A. ");
            break;
        case 14:
            printf("A categoria do nadador é JUVENIL B. ");
            break;
        case 15:
            printf("A categoria do nadador é JUVENIL B. ");
            break;
        case 16:
            printf("A categoria do nadador é JUVENIL B. ");
            break;
        case 17:
            printf("A categoria do nadador é JUVENIL B. ");
            break;
        default:
            printf("A categoria do nadador é SÊNIOR. ");
    }

    return 0;
}