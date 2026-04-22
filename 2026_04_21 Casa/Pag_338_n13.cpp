#include <iostream>
using namespace std;

int n; 
string ricerca_esame; 
bool trovato = false;

struct Esame{
    string nome_esame; 
    float voto; 
}; 

int main(){

    cout<<"inserisci il numero massimo di esami da inserire";
    cin>>n; 

    if (n>30){
        cout<<"il numero inserito non è valido"; 
    }

    else{
        

        Esame Tabella[30]; 

        for (int i = 0; i < 30 ; i++){
            cout<<"inserisci il nome dell'esame"; 
            cin>> Esame[i].nome_esame;
            cout<<"inserisci il voto"; 
            cin>> Esame[i].voto;

        }

        cout<<"inserisci il nome dell'esame da cercare"; 
        cin>>ricerca_esame; 


    }
    
}
