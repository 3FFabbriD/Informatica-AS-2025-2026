#include <stdio.h>

int main() {
    FILE *fp;
    int voto;
    int min_suff, max_insuff;
    int trovato_suff = 0;
    int trovato_insuff = 0;

    fp = fopen("voti.txt", "r");

    if (fp == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &voto) == 1) {

        if (voto >= 6) {
            if (trovato_suff == 0) {
                min_suff = voto;
                trovato_suff = 1;
            } else if (voto < min_suff) {
                min_suff = voto;
            }
        } else {
            if (trovato_insuff == 0) {
                max_insuff = voto;
                trovato_insuff = 1;
            } else if (voto > max_insuff) {
                max_insuff = voto;
            }
        }
    }

    fclose(fp);

    if (trovato_suff)
        printf("Voto minimo per la sufficienza: %d\n", min_suff);
    else
        printf("Nessuna sufficienza trovata.\n");

    if (trovato_insuff)
        printf("Voto massimo per le insufficienze: %d\n", max_insuff);
    else
        printf("Nessuna insufficienza trovata.\n");

    return 0;
}
