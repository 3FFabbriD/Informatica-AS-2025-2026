#include <stdio.h>

int main() {
    int n;
    float a, b;
    float media, max_media;
    int indice = 1, indice_max = 1;

    printf("Inserisci il numero di coppie: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero di coppie non valido.\n");
        return 1;
    }

    // Lettura della prima coppia
    printf("Inserisci la coppia 1:\n");
    scanf("%f %f", &a, &b);

    max_media = (a + b) / 2;

    // Lettura delle altre coppie
    for (indice = 2; indice <= n; indice++) {
        printf("Inserisci la coppia %d:\n", indice);
        scanf("%f %f", &a, &b);

        media = (a + b) / 2;

        if (media > max_media) {
            max_media = media;
            indice_max = indice;
        }
    }

    printf("\nLa coppia con la media maggiore è la coppia %d\n", indice_max);
    printf("Media massima = %.2f\n", max_media);

    return 0;
}
