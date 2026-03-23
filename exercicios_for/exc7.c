#include <stdio.h>

int main() {
    int m;
    double valor, soma = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%lf", &valor);
        soma += valor;
    }
    printf("Média dos valores lidos: %.2f", soma / m);
    return 0;
}
