#include <iostream>
using namespace std;

int main() {
    int riga, colonna;
    int matrice[100][100];

    
    cout << "Inserisci numero righe: ";
    cin >> riga;
    cout << "Inserisci numero colonne: ";
    cin >> colonna;

    
    for (int i = 0; i < riga; i++) {
        for (int j = 0; j < colonna; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }

    
    for (int i = 0; i < riga - 1; i += 2) {
        for (int j = 0; j < colonna; j++) {
            int temp = matrice[i][j];
            matrice[i][j] = matrice[i + 1][j];
            matrice[i + 1][j] = temp;
        }
    }

    
    cout << "\nMatrice dopo lo scambio:\n";
    for (int i = 0; i < riga; i++) {
        for (int j = 0; j < colonna; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}