#include <iostream>
using namespace std;

struct Libro {
    int codice;
    int pagine;
    float costoPagina;
};

int main() {
    int n;
    cout << "Quanti libri vuoi inserire? ";
    cin >> n;

    Libro libri[100];

    float maxCosto = 0;
    int codiceMax;

    for (int i = 0; i < n; i++) {
        cout << "Libro " << i+1 << endl;

        cout << "Codice: ";
        cin >> libri[i].codice;

        cout << "Numero pagine: ";
        cin >> libri[i].pagine;

        cout << "Costo per pagina: ";
        cin >> libri[i].costoPagina;

        float costoTot = libri[i].pagine * libri[i].costoPagina;

        if (costoTot > maxCosto) {
            maxCosto = costoTot;
            codiceMax = libri[i].codice;
        }
    }

    cout << "Il codice del libro piu caro e': " << codiceMax;

    return 0;
}