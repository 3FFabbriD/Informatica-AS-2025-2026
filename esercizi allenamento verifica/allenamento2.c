#include <stdio.h>
#include <stdlib.h>

int a[6]; 
int somma=0;
float media;  

void valori_array(){
for(int i=0; i<6; i++){

printf("inserisci il valore nell'array"); 
scanf("%d", &a[i]);    
    
}

}

void calcolo_somma(){

for (int i=0;i<6;i++){
somma=somma+a[i];     
}    
}

void calcolo_media(){

media=somma/6.0;     
}


int main (){
valori_array(); 
calcolo_somma(); 
calcolo_media(); 

printf("la somma è %d\n", somma); 
printf("la media è %.2f\n", media); 
}
