#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int a,b,c;
double delta,x1,x2,x;  

printf("inserire a ovvero x^2"); 
scanf("%d", &a); 

printf("inserire b ovvero x"); 
scanf("%d", &b);

printf("inserire c ovvero il termine noto"); 
scanf("%d", &c);

if (a!=0){

delta=(b*b)-(4*a*c);     

if(delta>0){
x1=(-b+sqrt(delta))/(2*a);

x2=(-b-sqrt(delta))/(2*a);

printf("x1 è uguale a %lf mentre x2 è uguale a %lf", x1, x2 ); 
}

else if(delta==0){
x=-b/(2*a);
printf("l'unica soluzione è uguale a %lf ", x);     
}
else{
printf("l'equazione non ha soluzioni reali poichè il delta è minore di 0");    
}

}


else {
printf("l'equazione non è di 2 grado poichè a è uguale a 0 quindi il termine di 2 grado decade");     
}

}