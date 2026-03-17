#include <stdio.h>

int main() {
    int N;
    printf("Quanti voti? ");
    scanf("%d", &N);

    float v[N];
    float somma = 0;

    for(int i = 0; i < N; i++) {
        scanf("%f", &v[i]);
        somma += v[i];
    }

    printf("Voti insufficienti: ");
    for(int i = 0; i < N; i++) {
        if(v[i] < 6) {
            printf("%.1f ", v[i]);
        }
    }

    float media = somma / N;
    printf("\nMedia: %.2f\n", media);

    return 0;
}