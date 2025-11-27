#include <stdio.h>
#include <stdlib.h>

void costo_bagaglio(){
int differenza_peso;    
float prezzo_biglietto, peso_bagaglio,  costo_peso_bagaglio, costo_totale;    

    printf("Inserire il prezzo del biglietto aereo");
    scanf("%f", &prezzo_biglietto); 

    printf("inserire il peso del bagaglio"); 
    scanf("%f", &peso_bagaglio); 

    if (peso_bagaglio>20){

        printf("il bagaglio supera il limite di peso"); 
        
        differenza_peso=peso_bagaglio-20; 

        if (differenza_peso>=1)
        {
        printf("dovrà pagare un supplemento del 2 percento per ogni chilo sopra il limite di peso "); 
        
        costo_peso_bagaglio=(prezzo_biglietto/100)*2; 
        costo_peso_bagaglio=costo_peso_bagaglio*differenza_peso;
        
        costo_totale=costo_peso_bagaglio+prezzo_biglietto; 

        printf("il nuovo prezzo del suo biglietto è %f\n", costo_totale); 
        }

        else{
        printf("il bagaglio supera il limite di peso ma la differenza è minore di 1kg quindi non c'è nessun supplemento, quindi il costo del suo biglietto rimane invariato"); 
        }
    }
    
     printf("il bagaglio non supera il limite di peso, arrivederci"); 
    
}

int main (){
    costo_bagaglio();
    system("pause");
    return 0; 
}