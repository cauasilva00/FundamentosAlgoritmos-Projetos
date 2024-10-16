#include <stdio.h>

int main()
{
    int i, num, numeros, valortotal, somat;
    
    printf("quantos números voce quer somar? ");
    scanf("%d", &num);
    
    for (i = 0; i < num; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &numeros);
        valortotal += numeros / 15;
        somat += numeros;
    }
    
    printf("a soma do números é %d", somat);
    
    return 0;
}