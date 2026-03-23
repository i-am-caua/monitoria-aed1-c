#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    printf("A soma dos números inteiros entre 1 e %d é: %d", n, soma);
    return 0;
}
