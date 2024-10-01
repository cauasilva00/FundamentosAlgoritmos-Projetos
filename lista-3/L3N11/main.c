#include <stdio.h>

int calcularNotas100(int valor) {
    int quantidade = valor / 100;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 100\n", quantidade);
    }
    return valor % 100;
}

int calcularNotas50(int valor) {
    int quantidade = valor / 50;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 50\n", quantidade);
    }
    return valor % 50;
}

int calcularNotas20(int valor) {
    int quantidade = valor / 20;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 20\n", quantidade);
    }
    return valor % 20;
}

int calcularNotas10(int valor) {
    int quantidade = valor / 10;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 10\n", quantidade);
    }
    return valor % 10;
}

int calcularNotas5(int valor) {
    int quantidade = valor / 5;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 5\n", quantidade);
    }
    return valor % 5;
}

int calcularNotas1(int valor) {
    int quantidade = valor / 1;
    if (quantidade > 0) {
        printf("%d nota(s) de R$ 1\n", quantidade);
    }
    return valor % 1;
}

int main() {
    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    valor = calcularNotas100(valor);
    valor = calcularNotas50(valor);
    valor = calcularNotas20(valor);
    valor = calcularNotas10(valor);
    valor = calcularNotas5(valor);
    valor = calcularNotas1(valor);

    return 0;
}
