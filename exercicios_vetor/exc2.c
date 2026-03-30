#include <stdio.h>

int main() {
    int A[8], B[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] * 2;
    }
    for (int i = 0; i < 8; i++) {
        printf("%d", B[i]);
        if (i < 7) {
            printf(" ");
        }
    }
    return 0;
}
