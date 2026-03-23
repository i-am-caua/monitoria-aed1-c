#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            count++;
        }
    }
    printf("Números entre 1 e 1000 que são múltiplos de 3 ou 5 = %d", count);
    return 0;
}
