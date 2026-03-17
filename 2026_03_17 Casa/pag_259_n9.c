#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[20];
    srand(time(NULL));

    int trovato = 0;

    for(int i = 0; i < 20; i++) {
        v[i] = rand() % 100 + 1;
        printf("%d ", v[i]);

        if(v[i] < 10) {
            trovato = 1;
        }
    }

    if(trovato) {
        printf("\nEsiste almeno un numero minore di 10\n");
    } else {
        printf("\nNessun numero minore di 10\n");
    }

    return 0;
}