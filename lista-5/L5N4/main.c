#include <stdio.h>

#define dias 7

int main() {
    int passos[dias], total = 0;
    double media;
    
    printf ("Digite os passos de cada um dos 7 dias:\n");
    for(int i = 0; i < dias; i++){
        printf("%dº dia: ", i + 1);
        scanf("%d", &passos[i]);
        total += passos[i];
    }
    
    media = (double)total / dias;
    
    printf("o total de passos é %d\n", total);
    printf("a media de passos é %f\n", media);
    
    printf("dias em que foi alcançada a meta de 10.000 %d\n", total);
    for(int i=0; i<dias; i++) {
        if(passos[i] >= 10000) {
            printf("Dia %d ", i + 1);
        }
    }

    
    return 0;
}