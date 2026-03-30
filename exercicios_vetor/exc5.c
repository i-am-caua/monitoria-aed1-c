#include <stdio.h>

int main() {
    int A[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int auxiliar = A[j];
                A[j] = A[j + 1];
                A[j + 1] = auxiliar;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d", A[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    return 0;
}
