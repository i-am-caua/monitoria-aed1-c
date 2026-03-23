#include <stdio.h>

int main() {
    for (int i = 1; i <= 15; i++) {
        if (i > 1) printf(" ");
        printf("%d", i * 3);
    }
    return 0;
}
