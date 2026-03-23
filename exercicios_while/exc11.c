#include <stdio.h>

int main() {
    int voto;
    int c1 = 0, c2 = 0, c3 = 0;

    scanf("%d", &voto);
    while (voto != 0) {
        if (voto == 1) c1++;
        if (voto == 2) c2++;
        if (voto == 3) c3++;
        scanf("%d", &voto);
    }

    if (c1 == 1) printf("Candidato 1: %d voto\n", c1);
    else printf("Candidato 1: %d votos\n", c1);

    if (c2 == 1) printf("Candidato 2: %d voto\n", c2);
    else printf("Candidato 2: %d votos\n", c2);

    if (c3 == 1) printf("Candidato 3: %d voto\n", c3);
    else printf("Candidato 3: %d votos\n", c3);

    if (c1 >= c2 && c1 >= c3) printf("Vencedor = Candidato 1.");
    else if (c2 >= c1 && c2 >= c3) printf("Vencedor = Candidato 2.");
    else printf("Vencedor = Candidato 3.");

    return 0;
}
