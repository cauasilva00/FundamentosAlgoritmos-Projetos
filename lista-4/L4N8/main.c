#include <stdio.h>



int main() {
    int numero;
    char resposta;
    
    int calcularFatorial(int n) {
        int resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
    return resultado;
    }
    
    do {
        printf("Entre com um número: ");
        scanf("%d", &numero);

        printf("O fatorial de %d é %d\n", numero, calcularFatorial(numero));

        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &resposta);
    } while (resposta == 's');

    return 0;
}