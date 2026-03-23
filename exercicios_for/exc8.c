#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        count++;
    }
    printf("Quantidade de pares entre 1 e %d: %d", n, count);
    return 0;
}
