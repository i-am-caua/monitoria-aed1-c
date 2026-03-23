#include <stdio.h>

int main() {
    char opcao = 'S';

    while (opcao == 'S') {
        int inicio, fim;
        scanf("%d %d", &inicio, &fim);

        printf("Números no intervalo: ");
        int i = inicio;
        while (i <= fim) {
            if (i == inicio) {
                printf("%d", i);
            } else {
                printf(", %d", i);
            }
            i++;
        }
        printf("\n");

        printf("Divisíveis por 4: ");
        int count = 0;
        int primeiro = 1;
        i = inicio;
        while (i <= fim) {
            if (i % 4 == 0) {
                if (primeiro) {
                    printf("%d", i);
                    primeiro = 0;
                } else {
                    printf(", %d", i);
                }
                count++;
            }
            i++;
        }
        printf(" (total de %d)\n", count);

        scanf(" %c", &opcao);
    }
    return 0;
}
