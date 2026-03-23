#include <stdio.h>

int main() {
    int num;
    int count = 0;

    scanf("%d", &num);
    while (num != 0) {
        if (num % 10 == 5 || num % 10 == -5) {
            count++;
        }
        scanf("%d", &num);
    }
    printf("Quantidade de números terminados em 5: %d", count);
    return 0;
}
