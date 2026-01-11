#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num;
    int max, min;

    fp = fopen("numeri.txt", "r");
    if (fp == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    
    if (fscanf(fp, "%d", &num) != 1) {
        printf("Il file è vuoto o non valido.\n");
        fclose(fp);
        return 1;
    }

    max = min = num;

    
    while (fscanf(fp, "%d", &num) == 1) {
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    fclose(fp);

    printf("Valore massimo: %d\n", max);
    printf("Valore minimo: %d\n", min);
    printf("Differenza (max - min): %d\n", max - min);

    return 0;
}
