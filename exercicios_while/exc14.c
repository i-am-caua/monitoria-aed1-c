#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);
    while (num < 1 || num > 10) {
        printf("Número inválido, tente novamente.\n");
        scanf("%d", &num);
    }

    printf("Tabuada de adição do %d:\n", num);
    int i = 1;
    while (i <= 10) {
        printf("%d + %d = %d\n", num, i, num + i);
        i++;
    }
    return 0;
}
