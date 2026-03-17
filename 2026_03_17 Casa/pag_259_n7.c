#include <stdio.h>

int main() {
    int N;
    printf("Quanti numeri? ");
    scanf("%d", &N);

    int v[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int somma_pari = 0, somma_dispari = 0;

    printf("Posizioni pari: ");
    for(int i = 0; i < N; i += 2) {
        printf("%d ", v[i]);
        somma_pari += v[i];
    }

    printf("\nSomma pari: %d\n", somma_pari);

    printf("Posizioni dispari: ");
    for(int i = 1; i < N; i += 2) {
        printf("%d ", v[i]);
        somma_dispari += v[i];
    }

    printf("\nSomma dispari: %d\n", somma_dispari);

    return 0;
}