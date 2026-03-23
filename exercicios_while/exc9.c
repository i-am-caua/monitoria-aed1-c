#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);
    while (num <= 0) {
        printf("Número inválido, tente novamente.\n");
        scanf("%d", &num);
    }

    printf("Divisores de %d: ", num);
    int i = 1;
    int primeiro = 1;
    while (i <= num) {
        if (num % i == 0) {
            if (primeiro) {
                printf("%d", i);
                primeiro = 0;
            } else {
                printf(", %d", i);
            }
        }
        i++;
    }
    return 0;
}
