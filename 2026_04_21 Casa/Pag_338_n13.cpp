#include <iostream>
#include <string>
using namespace std;

struct Esame {
    string nome_esame;
    float voto;
};

int main() {
    int n;
    string ricerca_esame;
    bool trovato = false;

    cout << "Inserisci il numero massimo di esami: ";
    cin >> n;

    if (n > 30) {
        cout << "Numero non valido";
        return 0;
    }

    Esame Tabella[30];

    // inserimento
    for (int i = 0; i < n; i++) {
        cout << "Nome esame: ";
        cin >> Tabella[i].nome_esame;

        cout << "Voto: ";
        cin >> Tabella[i].voto;
    }

    // ricerca
    cout << "Inserisci esame da cercare: ";
    cin >> ricerca_esame;

    for (int i = 0; i < n; i++) {
        if (Tabella[i].nome_esame == ricerca_esame) {
            cout << "Voto: " << Tabella[i].voto;
            trovato = true;
            break;
        }
    }

    if (!trovato) {
        cout << "Esame non trovato";
    }

    return 0;
}