#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
srand(time(0));

int count=0; 
int matrice [10][10]; 

for ( int i = 0; i < 10 ; i++){
    for ( int j = 0; j < 10; j++){
      
        matrice[i][j] = rand() % 10;
    }

}

for ( int i = 0; i < 10; i++){
   for ( int j = 0; j < 10; j++){
    
    cout<<matrice[i][j] <<" ";
    
    if (matrice[i][j]==0){
        count++; 
    }
    
}
   cout << endl; 
}

cout << "nella matrice ci sono " << count << " zeri";
}