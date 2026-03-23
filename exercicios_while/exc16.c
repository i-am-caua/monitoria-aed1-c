#include <stdio.h>

int main() {
    int num;
    int pares = 0, impares = 0;

    scanf("%d", &num);
    while (num != 999) {
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        scanf("%d", &num);
    }
    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impares);
    return 0;
}
