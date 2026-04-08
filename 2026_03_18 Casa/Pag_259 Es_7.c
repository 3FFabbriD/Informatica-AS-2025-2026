#include <stdio.h>

int main() {
    int v[10];
    int sommaPari = 0, sommaDispari = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Posizioni dispari: ");
    for(int i = 1; i < 10; i += 2) {
        printf("%d ", v[i]);
        sommaDispari += v[i];
    }
    printf("\nSomma dispari: %d\n", sommaDispari);

    printf("Posizioni pari: ");
    for(int i = 0; i < 10; i += 2) {
        printf("%d ", v[i]);
        sommaPari += v[i];
    }
    printf("\nSomma pari: %d\n", sommaPari);

    return 0;
}