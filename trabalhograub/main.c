#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[30];
    int ingredientes[7];
    int quantidades[7];
} Pocao;

Pocao receitas[] = {
    {"Poção de cura", {0, 1, 4, 6, -1}, {30, 20, 20, 10, -1}}, // botar -1 pra finalizar erro de repetição
    {"Poção Força da Floresta", {3, 2, 4, -1}, {20, 30, 30, -1}},
    {"Poção Sabedoria da Riqueza", {1, 0, -1}, {30, 50, -1}},
    {"Poção sorte no Amor", {3, 4, 6, -1}, {10, 50, 5, -1}},
    {"Poção malvada", {5, 2, -1}, {10, 15, -1}}
};

int main() {
    int escolhaMenu;
    int numeroIngrediente, quantidadeIngrediente, respostaAbastecimento;
    Ingrediente todosIngredientes[7];

    strcpy(todosIngredientes[0].nome, "Pó de fênix");
    todosIngredientes[0].quantidade = 100;
    strcpy(todosIngredientes[1].nome, "Essência celestial");
    todosIngredientes[1].quantidade = 50;
    strcpy(todosIngredientes[2].nome, "Raiz de dragão");
    todosIngredientes[2].quantidade = 45;
    strcpy(todosIngredientes[3].nome, "orvalho lunar");
    todosIngredientes[3].quantidade = 30;
    strcpy(todosIngredientes[4].nome, "flores secas");
    todosIngredientes[4].quantidade = 200;
    strcpy(todosIngredientes[5].nome, "Elixir amargo");
    todosIngredientes[5].quantidade = 20;
    strcpy(todosIngredientes[6].nome, "Lágrimas de unicórnio");
    todosIngredientes[6].quantidade = 15;

    do {
        printf("|Menu Principal|\n\n");
        printf("1. Consultar Ingredientes Disponívbeis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair do Programa\n\n");
        scanf("%d", &escolhaMenu);
        printf("\n");

        if (escolhaMenu == 1) {
            for (int i = 0; i < 7; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 6) {
                    printf("%d. %s: %d ml\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                } else {
                    printf("%d. %s: %d g\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                }
            }
            printf("\n");
        } else if (escolhaMenu == 2) {
            printf("Escolha a poção que deseja preparar:\n");
            for (int i = 0; i < 5; i++) {
                printf("%d. %s\n", i + 1, receitas[i].nome);
            }
            
            int escolhaPocao;
            scanf("%d", &escolhaPocao);
            escolhaPocao--;
            
            if (escolhaPocao < 0 || escolhaPocao >= 5) {
                printf("Escolha inválida! Tente novamente.\n");
            } else {
                int podePreparar = 1;
                
                for (int i = 0; receitas[escolhaPocao].ingredientes[i] != -1; i++) {
                    int indiceIngrediente = receitas[escolhaPocao].ingredientes[i];
                    int quantidadeNecessaria = receitas[escolhaPocao].quantidades[i];
                    if (todosIngredientes[indiceIngrediente].quantidade < quantidadeNecessaria) {
                        podePreparar = 0;
                        printf("Ingrediente insuficiente: %s (Necessário: %d, Disponível: %d)\n", todosIngredientes[indiceIngrediente].nome, quantidadeNecessaria, todosIngredientes[indiceIngrediente].quantidade);
                    }
                }
                
                if (podePreparar) {
                    for (int i = 0; receitas[escolhaPocao].ingredientes[i] != -1; i++) {
                        int indiceIngrediente = receitas[escolhaPocao].ingredientes[i];
                        int quantidadeNecessaria = receitas[escolhaPocao].quantidades[i];
                        todosIngredientes[indiceIngrediente].quantidade -= quantidadeNecessaria;
                    }
                    printf("Poção criada com sucesso!\n");
                } else {
                    printf("Não foi possível criar a poção.\n");
                }
            }
            printf("\n");
        } else if (escolhaMenu == 3) {
            do {
                for (int i = 0; i < 7; i++) {
                    if (i == 1 || i == 3 || i == 5 || i == 6) {
                        printf("%d. %s: %d ml\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                    } else {
                        printf("%d. %s: %d g\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                    }
                }
                printf("\nNúmero do ingrediente que será abastecido: ");
                scanf("%d", &numeroIngrediente);
                
                printf("Quantidade que será abastecida: ");
                scanf("%d", &quantidadeIngrediente);
                
                todosIngredientes[numeroIngrediente - 1].quantidade += quantidadeIngrediente;
                
                printf("Estoque atualizado\n");
                for (int i=1; i<=7; i++) {
                    if (i == 1 || i == 3 || i == 5 || i == 6) {
                        printf("%d. %s: %d ml\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                    } else {
                        printf("%d. %s: %d g\n", i + 1, todosIngredientes[i].nome, todosIngredientes[i].quantidade);
                    }
                }
                printf("\n");
                printf("Abastecer outro ingrdiente[1]\nNão abastecer outro ingredientes[2]\n\n");
                scanf("%d", &respostaAbastecimento);
                printf("\n");
            } while (respostaAbastecimento != 2);
        }
    } while (escolhaMenu != 4);

    return 0;
}
