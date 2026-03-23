#include <stdio.h>

int main() {
    int base, expoente;
    long long resultado = 1;
    scanf("%d %d", &base, &expoente);
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    printf("%d^%d = %lld", base, expoente, resultado);
    return 0;
}
