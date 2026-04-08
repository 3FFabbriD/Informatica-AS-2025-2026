#include <stdio.h>

int main() {
    int v[10], n, pos;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &pos);

    for(int i = pos; i < 9; i++) {
        v[i] = v[i+1];
    }

    for(int i = 0; i < 9; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}