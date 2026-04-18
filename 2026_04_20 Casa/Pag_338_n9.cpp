#include <iostream>
using namespace std; 

int main(){
    int matriceA[5][5];
    int matriceB[5][5];
    int matriceC[5][5]; 
  

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            cout<<"popola la matrice A"; 
            cin>>matriceA[i][j];
            
        }
        
    }
    
       for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            cout<<"popola la matrice B"; 
            cin>>matriceB[i][j];
            
        }
        
    }
    
     for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            matriceC[i][j] = matriceA[i][j] + matriceB[i][j];
            
            
        }
        
    }

    cout<<"la somma delle matrici è: "<<matriceC; 

}