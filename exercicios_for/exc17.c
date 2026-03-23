#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    scanf("%d", &n);
    for (int temp = n; temp > 0; temp /= 10) {
        soma += temp % 10;
    }
    printf("Soma dos dígitos de %d: %d", n, soma);
    return 0;
}
