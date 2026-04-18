#include <iostream>
#include <string>
using namespace std;

struct Bevanda {
    string nome;
    float prezzo;
};

int main() {
    Bevanda listino[10];

    
    for (int i = 0; i < 10; i++) {
        cout << "Bevanda " << i + 1 << endl;
        cout << "Nome: ";
        cin >> listino[i].nome;
        cout << "Prezzo: ";
        cin >> listino[i].prezzo;
    }

    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (listino[i].nome > listino[j].nome) {
                Bevanda temp = listino[i];
                listino[i] = listino[j];
                listino[j] = temp;
            }
        }
    }

    
    cout << "\nListino ordinato per nome:\n";
    for (int i = 0; i < 10; i++) {
        cout << listino[i].nome << " - " << listino[i].prezzo << endl;
    }

    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (listino[i].prezzo > listino[j].prezzo) {
                Bevanda temp = listino[i];
                listino[i] = listino[j];
                listino[j] = temp;
            }
        }
    }

    
    cout << "\nListino ordinato per prezzo:\n";
    for (int i = 0; i < 10; i++) {
        cout << listino[i].nome << " - " << listino[i].prezzo << endl;
    }

    return 0;
}