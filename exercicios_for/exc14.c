#include <stdio.h>

int main() {
    for (int c = 0; c <= 100; c += 10) {
        double f = c * 9.0 / 5.0 + 32.0;
        printf("%d °C = %.1f °F\n", c, f);
    }
    return 0;
}
