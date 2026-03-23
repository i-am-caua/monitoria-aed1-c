#include <stdio.h>

int main() {
    double venda;
    int count = 0;

    scanf("%lf", &venda);
    while (venda != 0) {
        if (venda > 100.0) {
            count++;
        }
        scanf("%lf", &venda);
    }
    printf("Quantidade de vendas acima de 100 reais: %d", count);
    return 0;
}
