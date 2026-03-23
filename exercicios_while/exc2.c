#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);
        if (num <= 0) {
            printf("Valor inválido, tente novamente.\n");
            continue;
        }
        break;
    }
    while (num > 1) {
        printf("%d ", num);
        num--;
    }
    printf("1");
    return 0;
}
