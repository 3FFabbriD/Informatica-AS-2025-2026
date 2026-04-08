#include <stdio.h>

int main() {
    int v[10] = {1,3,5,7,9};
    int n = 5, x;

    scanf("%d", &x);

    int i;
    for(i = n - 1; i >= 0 && v[i] > x; i--) {
        v[i+1] = v[i];
    }

    v[i+1] = x;
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}