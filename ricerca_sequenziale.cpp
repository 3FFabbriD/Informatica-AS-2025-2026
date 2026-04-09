#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contatto{

    string cognome; 

    string nome; 

    string telefono; 

}

void aggiungiContatto(vector<Contatto>& rubrica, string c, string n, string tel) {
    Contatto nuovo;
    nuovo.cognome = c;
    nuovo.nome = n;
    nuovo.telefono = tel;
    
   
    rubrica.push_back(nuovo);
}


int ricercaSequenziale (const vector<Contatto>&rubrica, string c, string n){
    for(int i=0; i<rubrica.size(); i++){

        if(rubrica[i].cognome == c && rubrica[i].nome == n){
            return i; 
        }
    }
    return -1; 
}

int main(){

vector<Contatto> rubrica;

   
    aggiungiContatto(rubrica, "rossi", "mario", "111");
    aggiungiContatto(rubrica, "bianchi", "luigi", "222");
    aggiungiContatto(rubrica, "verdi", "anna", "333");
    aggiungiContatto(rubrica, "neri", "paolo", "444");
    aggiungiContatto(rubrica, "gialli", "luca", "555");
    aggiungiContatto(rubrica, "viola", "sara", "666");
    aggiungiContatto(rubrica, "blu", "marco", "777");
    aggiungiContatto(rubrica, "marroni", "elena", "888");
    aggiungiContatto(rubrica, "grigi", "stefano", "999");
    aggiungiContatto(rubrica, "oro", "giulia", "000");    
 


cout << "Sistema avviato. Caricati " << rubrica.size() << " contatti in RAM." << endl;

string cog, nom; 
cout<<"\nRicerca contatto (sequenziale)" <<endl; 
cout<<"Cognome: "; cin >> cog; 
cout<<"Nome: "; cin >> nom; 

int pos = ricercaSequenziale(rubrica, cog, nom); 

if (pos != -1) {
    cout <<"Trovato! Telefono: " << rubrica[pos].telefono << " (Indice: " << pos << ")" << endl;
 } else {
        cout << "Contatto non trovato." << endl;
    }

    return 0;

}