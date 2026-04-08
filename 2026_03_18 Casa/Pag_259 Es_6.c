#include <stdio.h>

int main() {
    int N;
    printf("Quanti dipendenti? ");
    scanf("%d", &N);

    float stipendi[N];

    for(int i = 0; i < N; i++) {
        scanf("%f", &stipendi[i]);
    }

    float max = -1, min = 100000;
    int trovato = 0;

    for(int i = 0; i < N; i++) {
        if(stipendi[i] >= 1500 && stipendi[i] <= 2000) {
            if(stipendi[i] > max) max = stipendi[i];
            if(stipendi[i] < min) min = stipendi[i];
            trovato = 1;
        }
    }

    if(trovato) {
        printf("Max: %.2f\n", max);
        printf("Min: %.2f\n", min);
    } else {
        printf("Nessuno stipendio tra 1500 e 2000\n");
    }

    return 0;
}