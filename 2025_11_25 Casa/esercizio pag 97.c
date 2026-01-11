#include <stdio.h>
#include <stdlib.h>

void somma_prodotto(){
    int a, b, ris; 

    printf("inserire il primo numero");
    scanf("%d",&a);

    printf("inserire il secondo numero");
    scanf("%d", &b);

    if (a>0)
    {
        ris=a+b;
    }

    else 
    ris=a*b;
    printf("il risultato è %d\n", ris);
    
}

int main (int argc, char *argv[]){
    somma_prodotto();
    system("pause"); 
    return 0; 
}