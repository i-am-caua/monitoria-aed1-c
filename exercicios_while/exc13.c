#include <stdio.h>

int main() {
    int num;
    int count = 0;

    scanf("%d", &num);
    while (num != 999) {
        if (num % 3 == 0) {
            count++;
        }
        scanf("%d", &num);
    }
    printf("Quantidade de múltiplos de 3 lidos: %d", count);
    return 0;
}
