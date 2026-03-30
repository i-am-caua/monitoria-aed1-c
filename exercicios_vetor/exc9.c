#include <stdio.h>

int main() {
    int A[10], B[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    int primeiraImpressao = 1;
    for (int i = 0; i < 10; i++) {
        int jaImpresso = 0;
        for (int j = 0; j < i; j++) {
            if (A[j] == A[i]) {
                jaImpresso = 1;
                break;
            }
        }

        if (!jaImpresso) {
            int ehComum = 0;
            for (int k = 0; k < 10; k++) {
                if (A[i] == B[k]) {
                    ehComum = 1;
                    break;
                }
            }

            if (ehComum) {
                if (!primeiraImpressao) {
                    printf(" ");
                }
                printf("%d", A[i]);
                primeiraImpressao = 0;
            }
        }
    }

    if (primeiraImpressao) {
        printf("Nenhum elemento em comum.");
    }

    return 0;
}
