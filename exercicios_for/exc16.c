#include <stdio.h>

int main() {
    int primeiro = 1;
    for (int i = 4; i <= 500; i += 4) {
        if (!primeiro) printf(" ");
        primeiro = 0;
        printf("%d", i);
    }
    return 0;
}
