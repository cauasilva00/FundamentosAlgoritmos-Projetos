#include <stdio.h>

int main() 
    {
        float cotEuro, cotDolar;
        float valor, resultado;
        int opcao;
    
        printf("Informe a cotação do euro em relação ao Real: ");
        scanf("%f", &cotEuro);
        printf("Informe a cotação do dólar em relação ao Real: ");
        scanf("%f", &cotDolar);
        
        printf("\nMenu de Conversão:\n");
        printf("1) Converter de real para euro\n");
        printf("2) Converter de real para dólar\n");
        printf("3) Converter de euro para dólar\n");
        printf("4) Converter de euro para real\n");
        printf("5) Converter de dólar para euro\n");
        printf("6) Converter de dólar para real\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        printf("Informe o valor a ser convertido: ");
        scanf("%f", &valor);
        
        switch(opcao) {
            case 1:
                resultado = valor / cotEuro;
                printf("%.2f Reais equivalem a %.2f Euros\n", valor, resultado);
                break;
            case 2:
                resultado = valor / cotDolar;
                printf("%.2f Reais equivalem a %.2f Dólares\n", valor, resultado);
                break;
            case 3:
                resultado = valor * cotDolar / cotEuro;
                printf("%.2f Euros equivalem a %.2f Dólares\n", valor, resultado);
                break;
            case 4:
                resultado = valor * cotEuro;
                printf("%.2f Euros equivalem a %.2f Reais\n", valor, resultado);
                break;
            case 5:
                resultado = valor * cotEuro / cotDolar;
                printf("%.2f Dólares equivalem a %.2f Euros\n", valor, resultado);
                break;
            case 6:
                resultado = valor * cotDolar;
                printf("%.2f Dólares equivalem a %.2f Reais\n", valor, resultado);
                break;
        }
        
        return 0;
    }
