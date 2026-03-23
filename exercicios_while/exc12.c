#include <stdio.h>

int main() {
    double valor;
    double soma = 0;
    int count = 0;

    scanf("%lf", &valor);
    while (valor != -999) {
        soma += valor;
        count++;
        scanf("%lf", &valor);
    }
    printf("Média = %.2f", soma / count);
    return 0;
}
