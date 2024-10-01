#include <stdio.h>

int main(){
    
    float camiseta, calca, cinto, valorcamiseta, valorcalca, valorcinto, valorDesconto, valorTotal;

    printf("Quantas camisetas você comprou? ");
    scanf("%f", &camiseta);

    printf("Quantas calças você comprou? ");
    scanf("%f", &calca);

    printf("Quantos cintos você comprou? ");
    scanf("%f", &cinto);

    valorcamiseta = camiseta * 25;
    valorcalca = calca * 100;
    valorcinto = cinto * 40;
    valorTotal = valorcamiseta + valorcalca + valorcinto;
    valorDesconto = valorTotal - (0.1 * valorTotal);

    printf("O valor total da sua compra com desconto é %.2f, já que suas compras de camisetas foram R$%.2f, de calças foram R$%.2f e de cintos foram R$%.2f ", valorDesconto, valorcamiseta, valorcalca, valorcinto);

    return 0;
}