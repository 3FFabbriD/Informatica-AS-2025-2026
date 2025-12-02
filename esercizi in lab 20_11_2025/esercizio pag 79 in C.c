#include <stdio.h>
#include <stdlib.h>

#define CostoBN 0.10
#define CostoC 0.80
#define CostoR 1.30 

void Calcola_Spesa(){

int FotoBN, FotoC, FotoTot; 
float SpesaBN, SpesaC, SpesaTot;  

printf("inserire la quantità di fotocopie in bianco&nero"); 
scanf("%d", &FotoBN); 

printf("inserire la quantità di fotocopie a Colori"); 
scanf("%d", &FotoC);

FotoTot=FotoBN+FotoC;

SpesaBN=FotoBN*CostoBN; 

SpesaC=FotoC*CostoC; 

SpesaTot=SpesaC+SpesaBN+CostoR; 

printf("Il costo di %d fotocopie + rilegatura è di € %.2f\n", FotoTot, SpesaTot);

} 

int main(){
    Calcola_Spesa();
    system("pause");
    return 0; 
}