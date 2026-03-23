#include <stdio.h>

int main() {
    int inicioContagem;
    int fimContagem;
    scanf("%d %d", &inicioContagem, &fimContagem);
    if (inicioContagem >= fimContagem) {
        printf("Erro! inicio >= final.");
        return -1;
    }
    if (inicioContagem % 2 != 0) {
        ++inicioContagem;
    }
    while (inicioContagem <= fimContagem) {
        printf("%d ", inicioContagem);
        inicioContagem += 2;
    }
    return 0;
}
