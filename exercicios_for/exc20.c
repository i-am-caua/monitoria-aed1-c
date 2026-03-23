#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    scanf("%d", &n);
    printf("Os %d primeiros números ímpares são:\n", n);
    for (int i = 0; i < n; i++) {
        int impar = 2 * i + 1;
        if (i > 0) printf(" ");
        printf("%d", impar);
        soma += impar;
    }
    printf("\nSua soma é: %d", soma);
    return 0;
}
