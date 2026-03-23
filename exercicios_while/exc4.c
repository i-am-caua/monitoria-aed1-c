#include <stdio.h>

int main() {
    int idade;
    int menores = 0;
    int maiores = 0;

    scanf("%d", &idade);
    while (idade != 999) {
        if (idade < 18) {
            menores++;
        } else {
            maiores++;
        }
        scanf("%d", &idade);
    }
    printf("Menores de idade: %d\n", menores);
    printf("Maiores ou iguais a 18: %d\n", maiores);
    return 0;
}
