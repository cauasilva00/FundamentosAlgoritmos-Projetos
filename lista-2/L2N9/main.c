#include <stdio.h>

int main()
{
    float compraCliente, descontoDado, compraDesconto;
    
    printf("Quanto será a sua compra na nossa loja? ");
    scanf("%f", &compraCliente);
    
    printf("De quanto é o desconto da categoria do produto que você vai comprar? ");
    scanf("%f", &descontoDado);
    
    compraDesconto = compraCliente - (descontoDado/100 * compraCliente);
    
    printf("O total da sua compra com desconto é %.2f, já que o desconto pra sua categoria de produto é %.2f por cento", compraDesconto, descontoDado);

    return 0;
}
