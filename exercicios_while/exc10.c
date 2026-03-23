#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    while (soma <= 100) {
        scanf("%d", &num);
        soma += num;
        printf("Soma parcial = %d\n", soma);
    }
    printf("Limite ultrapassado! Soma final = %d", soma);
    return 0;
}
