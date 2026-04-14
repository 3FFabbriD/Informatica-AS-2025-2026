#include <iostream>
using namespace std; 

int matrice [100][100];

int riga,colonna; 

int main(){
    cout<<"inserisci il limite per le righe"; 
    cin>>riga; 

    cout<<"inserisci il limite per le colonne"; 
    cin>>colonna; 

    for (int i = 0; i < riga; i++){
        for (int j = 0; j < colonna; j++){
           
            matrice[i][j]=(i+1)*(j+1); 
        }
        
    }
    
for (int i = 0; i < riga; i++){
    for (int j = 0; j < colonna; j++){
        
        cout<<matrice[i][j]<< " "; 
    }
    
    cout << endl; 

}


}