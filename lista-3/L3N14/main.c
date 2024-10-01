#include <stdio.h>

float calcularadicional(int idade) {
    if (idade < 10)
        return 100.0;
    else if (idade <= 30)
        return 220.0;
    else if (idade <= 60)
        return 395.0;
    else
        return 480.0;
}

int main() {
    int idadeconveniado, numdependentes, i, idadedependente;
    float valortotal = 300.0;
    
    printf("Digite a idade do conveniado: ");
    scanf("%d", &idadeconveniado);

    printf("Digite o número de dependentes: ");
    scanf("%d", &numdependentes);
    
    for (i = 0; i < numdependentes; i++) {
        printf("Digite a idade do dependente %d: ", i + 1);
        scanf("%d", &idadedependente);
        valortotal += calcularadicional(idadedependente);
    }

    printf("O valor total do plano de saúde é: R$ %.2f\n", valortotal);

    return 0;
}
