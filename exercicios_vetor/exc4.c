#include <stdio.h>

int main() {
    int A[10], B[10];
    int contador = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (A[i] % 2 == 0) {
            B[contador++] = A[i];
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (A[i] % 2 != 0) {
            B[contador++] = A[i];
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d", B[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    return 0;
}
