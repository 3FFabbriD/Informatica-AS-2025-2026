#include <stdio.h>

void bubbleSort(int v[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int ricercaLineare(int v[], int n, int valore) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == valore)
            return i;
    }
    return -1;
}

int sommaArray(int v[], int n) {
    if (n == 0)
        return 0;
    return v[n-1] + sommaArray(v, n-1);
}

int main() {
    int v[5];
    int i, numero, pos;

    for (i = 0; i < 5; i++) {
        printf("Inserisci numero: ");
        scanf("%d", &v[i]);
    }

    bubbleSort(v, 5);

    printf("Array ordinato:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", v[i]);

    printf("\nInserisci numero da cercare: ");
    scanf("%d", &numero);

    pos = ricercaLineare(v, 5, numero);

    if (pos != -1)
        printf("\nTrovato in posizione %d\n", pos);
    else
        printf("\nNon trovato\n");

    printf("Somma elementi (ricorsiva): %d\n", sommaArray(v, 5));

    return 0;
}