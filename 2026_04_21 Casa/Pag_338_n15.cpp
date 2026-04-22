#include <iostream>
using namespace std;

int main() {
    int matrice[4][5];
    bool verifica = true;

    
    cout << "Inserisci gli elementi della matrice 4x5:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrice[i][j];
        }
    }

    
    for (int i = 0; i < 4; i++) {
        int somma = 0;

        for (int j = 0; j < 5; j++) {
            if (j != 0) {
                if (matrice[i][j] != somma) {
                    verifica = false;
                    break;
                }
            }
            somma += matrice[i][j];
        }

        if (!verifica) break;
    }

    
    if (verifica) {
        cout << "La matrice soddisfa la condizione";
    } else {
        cout << "La matrice NON soddisfa la condizione";
    }

    return 0;
}