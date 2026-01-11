#include <stdio.h>
#include <stdlib.h>

int main (){

float x,a,b;

printf("inserisci a"); 
scanf("%d", &a); 

printf("inserisci b"); 
scanf("%d", &b);

if (a!=0 && b!=0)
{
   x=(b/a)*(-1);

   printf("la soluzione di questa equazione è: %f \n  ", x);   
}

else if (a==0 && b==0){

printf("l'equazione è impossibile poichè a=0 e l'equazione si sempliica in b=0 ma poichè b!=0 l'equazione non ha senso");    
}

else if(a==0 && b==0){

printf("l'equazione è indeterminata poichè diventa 0x+0=0 quindi ammette infinite soluzioni"); 
}

   



}