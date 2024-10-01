#include <stdio.h>

int main()
{
    int celulares, tablets, totalCel, totalTab, totalVendas;
    
    printf("Quantos celulares foram vendidos hoje? ");
    scanf("%d", &celulares);
    
    printf("Quantos tablets foram vendidos hoje? ");
    scanf("%d", &tablets);
    
    totalCel = celulares * 1000;
    totalTab = tablets * 1500;
    totalVendas = totalCel + totalTab;
    
    printf("O resulta de vendas do dia foi %dR$, visto que a loja vendeu %dR$ em celulares e %dR$ em tablets", totalVendas, totalCel, totalTab);
    
    return 0;
}
