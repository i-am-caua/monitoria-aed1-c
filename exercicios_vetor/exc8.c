#include <stdio.h>

int main() {
    int A[5], B[5];
    int produtoEscalar = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
        produtoEscalar += A[i] * B[i];
    }
    
    printf("Produto escalar: %d", produtoEscalar);
    
    return 0;
}
