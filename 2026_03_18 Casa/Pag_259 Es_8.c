#include <stdio.h>

int main() {
    int N;

    do {
        scanf("%d", &N);
    } while(N % 2 != 0);

    int v[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int count = 0;

    for(int i = 0; i < N - 1; i++) {
        if(v[i] == v[i+1]) {
            count++;
        }
    }

    printf("Coppie consecutive uguali: %d\n", count);

    return 0;
}