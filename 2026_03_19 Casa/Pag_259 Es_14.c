#include <stdio.h>

int main() {
    int v[100];
    int freq[21] = {0};

    for(int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
        if(v[i] >= 1 && v[i] <= 20) {
            freq[v[i]]++;
        }
    }

    printf("Frequenze:\n");
    for(int i = 1; i <= 20; i++) {
        if(freq[i] > 0) {
            printf("%d -> %d volte\n", i, freq[i]);
        }
    }

    return 0;
}