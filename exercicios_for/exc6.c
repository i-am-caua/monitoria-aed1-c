#include <stdio.h>

int main() {
    int primeiro = 1;
    for (int i = 2; i <= 200; i++) {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            if (!primeiro) printf(" ");
            primeiro = 0;
            printf("%d", i);
        }
    }
    return 0;
}
