#include <iostream>
#include <string>  
using namespace std; 
const float CK=1.20;   

void importo(){
    string nome; 
    float kmInizio, kmFine, kmPercorsi, importo; 
    
    cout<<"inserire il nome del cliente"<<endl; 
    cin>>nome; 

    cout<<"inserire i km iniziali"<<endl; 
    cin>>kmInizio; 

    cout<<"inserire i km finali"<<endl; 
    cin>>kmFine; 

    kmPercorsi=kmFine-kmInizio; 
    
    importo=kmPercorsi*CK;

    cout<<"il signor "<< nome <<"deve pagare €"<< importo; 
}


int main(){
    importo();
    system("pause"); 
    return 0; 
}