#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    
    for(int i = -10; i < 10; i++) {
        int sorteio = rand() % (10 + 10 + 1) - 10;
        
        if(sorteio > 0) {
            printf("%d - positivo\n", sorteio);
        }
        else if(sorteio < 0) {
            printf("%d - negativo\n", sorteio);
        }
        else {
            printf("%d - nulo\n", sorteio);
        }
    }

    return 0;
}
