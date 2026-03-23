#include <stdio.h>

int main() {
    int n, num;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num < 2) {
            continue;
        }
        int primo = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) count++;
    }
    printf("Números primos lidos: %d", count);
    return 0;
}
