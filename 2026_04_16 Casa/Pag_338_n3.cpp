#include <iostream>
using namespace std;

int main() {
    int riga = 5, colonna = 5;  
    int matrice[100][100];

    for (int i = 0; i < riga; i++) {
        for (int j = 0; j < colonna; j++) {
            matrice[i][j] = i + j;
        }
    }

    
    for (int i = 0; i < riga; i++) {
        for (int j = 0; j < colonna; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}