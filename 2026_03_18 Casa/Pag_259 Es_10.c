#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int voti[N];
    int somma = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &voti[i]);
        somma += voti[i];
    }

    printf("Voti insufficienti: ");
    for(int i = 0; i < N; i++) {
        if(voti[i] < 6) {
            printf("%d ", voti[i]);
        }
    }

    float media = (float)somma / N;
    printf("\nMedia: %.2f\n", media);

    return 0;
}