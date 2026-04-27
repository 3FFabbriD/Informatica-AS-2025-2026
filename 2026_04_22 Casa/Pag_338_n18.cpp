#include <iostream>
#include <string>
using namespace std;

struct Elenco {
    string nome;
    int voto;
};

int main() {

    Elenco Tabella[10];

    int somma = 0;
    float media = 0;
    int y = 0;
    int z = 0;
    float prc;

    
    for (int i = 0; i < 10; i++) {
        cout << "Inserisci nome: ";
        cin >> Tabella[i].nome;

        cout << "Inserisci voto: ";
        cin >> Tabella[i].voto;
    }

    
    for (int i = 0; i < 10; i++) {
        if (Tabella[i].voto != 0) {
            somma += Tabella[i].voto;
            y++;
        }
    }

    if (y != 0) {
        media = somma / y;
        cout << "Media (senza assenti): " << media << endl;
    }

    
    int max = Tabella[0].voto;
    int indice = 0;

    for (int i = 0; i < 10; i++) {
        if (Tabella[i].voto > max) {
            max = Tabella[i].voto;
            indice = i;
        }
    }

    cout << "Studente migliore: " << Tabella[indice].nome
         << " con voto " << max << endl;

    
    cout << "Studenti insufficienti:\n";
    for (int i = 0; i < 10; i++) {
        if (Tabella[i].voto < 6) {
            cout << Tabella[i].nome << endl;
        }
    }

    
    for (int i = 0; i < 10; i++) {
        if (Tabella[i].voto == 0) {
            z++;
        }
    }

    prc = (z * 100.0) / 10;

    cout << "Percentuale assenti: " << prc << "%" << endl;

    return 0;
}