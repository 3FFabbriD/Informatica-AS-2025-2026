#include <stdio.h>
#include <stdlib.h>

void operazioni(){
    float n1,n2,ris; 
    char operatore;

    printf("inserire il primo numero");
    scanf("%f", &n1); 

    printf("inserire il secondo numero");
    scanf("%f", &n2);

    printf("inserire l'operatore");
    scanf("%s", &operatore); 

    switch (operatore)
    {
    case "+":
        ris=n1+n2; 
        printf("somma=%3.3f\n", ris); 
        break;
    
    case "-":
        ris=n1-n2; 
        printf("differenza=%3.3f\n", ris); 
        break;

    case "*":
        ris=n1*n2; 
        printf("prodotto=%3.3f\n", ris); 
        break;

    case "/":
    if(n2==0){
        printf("errore\n");
    }

    else{ 
    ris=n1/n2;
    printf("divisione=%3.3f\n", ris);
    } 
    break;
    default: 
    printf("operazione inesistente\n");
    break; 
    }
}

int main (int argc, char*argv[]){
    operazioni();
    system("pause"); 
    return 0; 
}