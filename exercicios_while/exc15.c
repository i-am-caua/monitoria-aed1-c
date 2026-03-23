#include <stdio.h>

int main() {
    double nota;
    double maior, menor;
    int primeiro = 1;

    scanf("%lf", &nota);
    while (nota != 11) {
        if (primeiro) {
            maior = nota;
            menor = nota;
            primeiro = 0;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        scanf("%lf", &nota);
    }
    printf("Maior nota: %g\n", maior);
    printf("Menor nota: %g\n", menor);
    return 0;
}
