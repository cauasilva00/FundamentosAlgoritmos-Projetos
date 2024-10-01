#include <stdio.h>

int main()
{
    int passaros;
    float precoRacao, totalGasto;
    
	printf("Quantos passáros o você tem? ");
	scanf("%d", &passaros);
	
	printf("Quanto está o kilo da racão? ");
	scanf("%f", &precoRacao);
	
	totalGasto = (precoRacao * 0.03) * passaros;
	
	printf("O total gasto por dia com ração dos passaros será %f", totalGasto);

	return 0;
}
