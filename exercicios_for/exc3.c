#include <stdio.h>

int main() {
    for (int i = 50; i <= 150; i += 2) {
        if (i > 50) printf(" ");
        printf("%d", i);
    }
    return 0;
}
