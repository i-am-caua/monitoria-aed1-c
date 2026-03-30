#include <stdio.h>

int main() {
    int A[10];
    int indiceMaior = 0, indiceMenor = 0;
    double soma = 0.0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        soma += A[i];
        if (A[i] > A[indiceMaior]) {
            indiceMaior = i;
        }
        if (A[i] < A[indiceMenor]) {
            indiceMenor = i;
        }
    }
    
    printf("Indice do maior elemento: %d\n", indiceMaior);
    printf("Indice do menor elemento: %d\n", indiceMenor);
    printf("Media: %.2f", soma / 10.0);
    
    return 0;
}
