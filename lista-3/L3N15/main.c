#include <stdio.h>

int main()
{
    float preco, precoTotal;
    int pagamento;
    
    printf("Qual o preço do seu produto? ");
    scanf("%f", &preco);
    
    printf("Qual a sua forma de pagamento?\n");
    printf("[1] À vista em dinheiro.\n");
    printf("[2] À vista no cartão de crédito.\n");
    printf("[3] Em duas vezes.\n");
    printf("[4] Em três vezes.\n");
    scanf("%d", &pagamento);
    
    switch (pagamento) {
        case 1:
            precoTotal = preco - (preco * 0.15);
            printf("Seu valor total com o desconto da forma de pagamento é R$%.2f.", precoTotal);
            break;
        case 2:
            precoTotal = preco - (preco * 0.10);
            printf("Seu valor total com o desconto da forma de pagamento é R$%.2f.", precoTotal);
            break;
        case 3:
            precoTotal = preco;
            printf("Seu valor total sem o desconto da forma de pagamento é R$%.2f.", precoTotal);
            break;
        case 4:
            precoTotal = preco + (preco * 0.10);
            printf("Seu valor total com o juros da forma de pagamento é R$%.2f.", precoTotal);
            break;
        default:
            printf("Forma de pagamento inválida.");
    }
    

    return 0;
}