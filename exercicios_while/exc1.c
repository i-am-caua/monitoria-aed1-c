#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num < 0) break;
        sum += num;
    }
    printf("Somatório final = %d", sum);
    return 0;
}
