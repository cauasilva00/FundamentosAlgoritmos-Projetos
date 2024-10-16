#include <stdio.h>

int main()
{
    float i, numeros, valortotal, somat;
    
    for (i = 0; i < 15; i++) {
        printf("Digite o %.0fº: ", i + 1);
        scanf("%f", &numeros);
        valortotal += numeros / 15;
        somat += numeros;
    }
    
    printf("a média do números é %.2f\n", valortotal);
    printf("a soma do números é %.2f", somat);
    
    return 0;
}