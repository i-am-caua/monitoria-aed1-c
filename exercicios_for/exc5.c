#include <stdio.h>

int main() {
    long long a = 0, b = 1, c;
    printf("0 1");
    for (int i = 2; i < 20; i++) {
        c = a + b;
        a = b;
        b = c;
        printf(" %lld", c);
    }
    return 0;
}
