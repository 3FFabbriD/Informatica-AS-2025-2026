#include <iostream>
using namespace std;

int main() {
    int matrice[4][4];

    
    cout << "Inserisci gli elementi della matrice 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrice[i][j];
        }
    }

    
    int maxRiga = 0;
    int indiceRiga = 0;

    for (int i = 0; i < 4; i++) {
        int somma = 0;

        for (int j = 0; j < 4; j++) {
            somma += matrice[i][j];
        }

        if (i == 0 || somma > maxRiga) {
            maxRiga = somma;
            indiceRiga = i;
        }
    }

    
    int maxColonna = 0;
    int indiceColonna = 0;

    for (int j = 0; j < 4; j++) {
        int somma = 0;

        for (int i = 0; i < 4; i++) {
            somma += matrice[i][j];
        }

        if (j == 0 || somma > maxColonna) {
            maxColonna = somma;
            indiceColonna = j;
        }
    }

    
    if (maxRiga > maxColonna) {
        cout << "Riga con somma maggiore: " << indiceRiga 
             << " (somma = " << maxRiga << ")";
    } else {
        cout << "Colonna con somma maggiore: " << indiceColonna 
             << " (somma = " << maxColonna << ")";
    }

    return 0;
}