#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", i);
        soma += i;
    }
    printf("\nMédia = %.2f", (double)soma / n);
    return 0;
}
