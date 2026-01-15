#include <stdio.h>
#include <stdlib.h>

int p; 

int main(){

printf("inserire il voto ottenuto\n"); 
scanf("%d", &p); 

if (p<0 || p>100){
    printf("voto non valido\n");
    return 0;  
}

if else (p>=90 && p<=100){
    printf("eccellente!\n"); 
        return 0;  

}

if else (p>=70 && p<=89){
    printf("Buono!\n");
        return 0;  
 
}

if else (p>=50 && p<=69){
    printf("Sufficiente!\n");
        return 0;  
 
}

if else (p>=0 && p<=49){
    printf("Insufficiente!\n");
        return 0;  
 
}
}