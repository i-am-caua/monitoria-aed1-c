#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double soma = 0;
    int i = 1;

    printf("1/1");
    while (i <= n) {
        soma += 1.0 / i;
        if (i > 1) {
            printf(" + 1/%d", i);
        }
        i++;
    }
    printf(" = %.5f (aprox.)", soma);
    return 0;
}
