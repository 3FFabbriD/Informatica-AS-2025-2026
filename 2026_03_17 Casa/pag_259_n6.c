#include <stdio.h>

int main() {
    int N;
    printf("Quanti stipendi? ");
    scanf("%d", &N);

    float v[N];
    for(int i = 0; i < N; i++) {
        printf("Stipendio %d: ", i+1);
        scanf("%f", &v[i]);
    }

    float max = -1, min = 999999;
    int trovato = 0;

    for(int i = 0; i < N; i++) {
        if(v[i] >= 1500 && v[i] <= 2000) {
            if(!trovato) {
                max = min = v[i];
                trovato = 1;
            }
            if(v[i] > max) max = v[i];
            if(v[i] < min) min = v[i];
        }
    }

    if(trovato) {
        printf("Max: %.2f\nMin: %.2f\n", max, min);
    } else {
        printf("Nessuno stipendio nel range.\n");
    }

    return 0;
}