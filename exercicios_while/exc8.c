#include <stdio.h>

int main() {
    int senha;

    scanf("%d", &senha);
    while (senha != 1234) {
        printf("Senha incorreta.\n");
        scanf("%d", &senha);
    }
    printf("Acesso Permitido.");
    return 0;
}
