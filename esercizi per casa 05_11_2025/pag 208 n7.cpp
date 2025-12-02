#include <iostream> 
using namespace std;
float base, altezza, perimetro; 

void rettangolo ();
void stampa();  

int main () {

rettangolo ();

stampa(); 

}


void rettangolo (){
    cout<<"inserire la base"<<endl; 
    cin>>base; 

    cout<<"inserire l'altezza"<<endl; 
    cin>>altezza;

    perimetro=(base*2)+(altezza*2); 
}

void stampa (){
    cout<<"il perimetro di questo rettangolo è: " <<perimetro<<endl; 
}