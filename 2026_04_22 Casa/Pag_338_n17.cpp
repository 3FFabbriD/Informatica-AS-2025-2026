#include <iostream>
using namespace std; 

int main(){

   
    int matrice[5][5]; 

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout<<"inserisci gli elementi nella matrice"; 
            cin>>matrice[i][j]; 
        }
        
        
    }

    for (int i = 0; i < 5; i++){
        int max=matrice[i][0]; 

    for (int j = 0; j < 5; j++){
        if (matrice[i][j]>max){
            max=matrice[i][j]; 
            
        }
        
    }
     cout<<"max riga"<< i << ": " << max <<endl;  
    }
    
    for (int j = 0; j < 5; j++){
        int min=matrice[0][j];
        
        for (int i = 0; i < 5 ; i++){
            if (matrice[i][j]<min){
                min=matrice[i][j];
            }
            
            
        }
        cout<<"min colonna"<< j << ": " << min <<endl;  
        
    }
    
   int max=matrice[0][0];
   int min=matrice[0][0]; 

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matrice[i][j]>max){
                max=matrice[i][j]; 
            }
            if (matrice[i][j]<min){
                min=matrice[i][j]; 
                
            }
            
            
        }
        
        
    }
    cout<<"il minimo in tutta la matrice è : "<<min<< "mentre il massimo è : "<<max<<endl; 

}