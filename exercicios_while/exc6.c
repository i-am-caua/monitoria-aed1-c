#include <stdio.h>

int main() {
    int num;
    int maior, menor;
    int primeiro = 1;

    scanf("%d", &num);
    while (num != -1) {
        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
        scanf("%d", &num);
    }
    printf("O maior número digitado foi %d.\n", maior);
    printf("O menor número digitado foi %d.\n", menor);
    return 0;
}
