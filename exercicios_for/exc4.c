#include <stdio.h>

int main() {
    int n;
    long long fat = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("%d! = %lld", n, fat);
    return 0;
}
