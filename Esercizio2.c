#include <stdio.h>
#include <stdlib.h>

int soldi, prodotto, prezzo;  

int main(){

printf("selezionare il prodotto desiderato\n");

printf("1. Acqua (1€) \n 2. Patatine (2€) \n 3. Cioccolata (3€) \n"); 
scanf("%d", &prodotto); 

switch (prodotto)
{
case 1:
    prezzo=1; 
    printf("inserire le monete\n"); 
    scanf("%d", &soldi); 
    if (soldi>=prezzo)
    {
    printf("Ecco il tuo Prodotto!\n"); 
    }

    else{

    printf("credito insufficiente\n");     
    }
    
    break;

case 2:
    prezzo=2; 
    printf("inserire le monete\n"); 
    scanf("%d", &soldi); 
    if (soldi>=prezzo)
    {
    printf("Ecco il tuo Prodotto!\n"); 
    }

    else{

    printf("credito insufficiente\n");     
    }
    
case 3:
    prezzo=3; 
    printf("inserire le monete\n"); 
    scanf("%d", &soldi); 
    if (soldi>=prezzo)
    {
    printf("Ecco il tuo Prodotto!\n"); 
    }

    else{

    printf("credito insufficiente\n");     
    }


default:
printf("scelta non valida\n"); 
    break;
}
}