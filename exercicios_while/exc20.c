#include <stdio.h>

int main() {
    printf("Números perfeitos entre 1 e 10000:\n");

    int num = 1;
    int primeiro = 1;
    while (num <= 10000) {
        int soma = 0;
        int div = 1;
        while (div < num) {
            if (num % div == 0) {
                soma += div;
            }
            div++;
        }
        if (soma == num) {
            if (primeiro) {
                printf("%d", num);
                primeiro = 0;
            } else {
                printf(", %d", num);
            }
        }
        num++;
    }
    return 0;
}
