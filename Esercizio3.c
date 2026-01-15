#include <stdio.h>
#include <stdlib.h>

int nn, n, somma=0; 
int main(){

printf("quanti numeri si vogliono inserire?"); 
scanf("%d", &nn); 

for (int i = 0; i < nn; i++){

    printf("inserire il numero\n"); 
    scanf("%d", &n);
    if (n!= 0){
        somma=somma+n; 
    }

    else{
    break; 

    } 
    
    
}

printf("ecco la somma totale %d", somma); 


}