#include <stdio.h>

int main() {
    int v[10], pari[10];
    int j = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i += 2) {
        pari[j] = v[i];
        j++;
    }

    printf("Elementi in posizioni pari:\n");
    for(int i = 0; i < j; i++) {
        printf("%d ", pari[i]);
    }

    return 0;
}