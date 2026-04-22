#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int matrice[4][4];

    srand(time(0));

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrice[i][j] = rand() % 2;
        }
    }

    
    cout << "Matrice:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    
    bool verifica = true;

    int precedenti = 0;

    
    for (int j = 0; j < 4; j++) {
        if (matrice[0][j] == 1) {
            precedenti++;
        }
    }

    
    for (int i = 1; i < 4; i++) {
        int conta = 0;

        for (int j = 0; j < 4; j++) {
            if (matrice[i][j] == 1) {
                conta++;
            }
        }

        if (conta != precedenti) {
            verifica = false;
            break;
        }

        precedenti = conta;
    }

    
    if (verifica) {
        cout << "Ogni riga ha lo stesso numero di 1 della precedente";
    } else {
        cout << "Condizione NON verificata";
    }

    return 0;
}