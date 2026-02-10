#include <stdio.h>

int a[7];
int min, max;

void elementi_array() {
    for (int i = 0; i < 7; i++) {
        printf("Inserisci il valore nell'array %d: ", i);
        scanf("%d", &a[i]);
    }
}

void calcolo_max_min() {
    max = a[0];
    min = a[0];

    for (int i = 1; i < 7; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }
}

int main() {
    elementi_array();
    calcolo_max_min();

    printf("Il valore minimo è %d\n", min);
    printf("Il valore massimo è %d\n", max);

    return 0;
}
