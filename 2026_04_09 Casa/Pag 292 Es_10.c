#include <stdio.h>

int trovaPos(int v[], int n, int x) {
    int i;
    for(i = 0; i < n && v[i] < x; i++);
    return i;
}

void inserisci(int v[], int *n, int pos, int x) {
    for(int i = *n; i > pos; i--) {
        v[i] = v[i-1];
    }
    v[pos] = x;
    (*n)++;
}

int main() {
    int v[10] = {1,3,5,7,9};
    int n = 5, x;

    scanf("%d", &x);

    int pos = trovaPos(v, n, x);
    inserisci(v, &n, pos, x);

    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}