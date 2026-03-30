#include <stdio.h>

int main() {
    int A[5], B[5], C[10];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i];
    }
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
        C[i + 5] = B[i];
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d", C[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    
    return 0;
}
