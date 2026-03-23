#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    if (soma == n) {
        printf("%d é perfeito.", n);
    } else {
        printf("%d não é perfeito.", n);
    }
    return 0;
}
