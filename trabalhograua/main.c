#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() 
    {   
        int menu() {
            printf("1 - Nova Simulação\n");
            printf("2 - Sair do Programa\n");
            int opcao;
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            return opcao;
        }
        int verificarcond() {
            int sorteio = rand() % 100 + 1;
            if (sorteio <= 20) return -30;
            if (sorteio <= 35) return -25;
            if (sorteio <= 45) return -20;
            if (sorteio <= 50) return -50;
            if (sorteio <= 60) return 20;
            return 0;
        }
        
        srand(time(NULL));
        int opcao;
    
        do {
            opcao = menu();
    
            if (opcao == 1) {
                int pop, taxa, ciclos;
    
                printf("população inicial: ");
                scanf("%d", &pop);
                printf("taxa de crescimento: ");
                scanf("%d", &taxa);
                printf("número de ciclos: ");
                scanf("%d", &ciclos);
    
                for (int i = 1; i <= ciclos; i++) {
                    
                    pop += pop * taxa / 100;
                    int impacto = verificarcond();
                    if (impacto != 0) 
                    {
                        pop += pop * impacto / 100;
                        printf("Ciclo %d: População = %d (condição: %d%%)\n", i, pop, impacto);
                    } else 
                    {
                        printf("Ciclo %d: População = %d\n", i, pop);
                    }
                }
                printf("simulação concluída. população final: %d\n", pop);
            } else if (opcao != 2) {
                printf("ppção inválida. tente novamente.\n");
            }
        } while (opcao != 2);

    return 0;
}
