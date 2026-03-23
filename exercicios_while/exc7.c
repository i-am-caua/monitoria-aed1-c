#include <stdio.h>

int main() {
    int i = 1;
    int soma = 0;

    while (i <= 1000) {
        if (i % 2 != 0) {
            soma += i;
        }
        i++;
    }
    printf("Soma dos ímpares de 1 a 1000 = %d", soma);
    return 0;
}
