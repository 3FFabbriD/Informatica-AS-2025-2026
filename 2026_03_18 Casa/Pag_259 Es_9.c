#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[20];
    int trovato = 0;

    srand(time(NULL));

    for(int i = 0; i < 20; i++) {
        v[i] = rand() % 100 + 1;
        printf("%d ", v[i]);

        if(v[i] < 10) {
            trovato = 1;
        }
    }

    if(trovato) {
        printf("\nEsiste almeno un numero < 10\n");
    } else {
        printf("\nNessun numero < 10\n");
    }

    return 0;
}