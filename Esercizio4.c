#include <stdio.h>
#include <stdlib.h>

int temp; 

int main(){

 for (int i = 0; i < 5; i++){

 printf("inserire la temperatura registrata \n"); 
 scanf("%d", &temp); 

 if (temp>30){
    printf("Caldo torrido \n")
 }

 if else (temp>0 && temp<30){

    printf("Caldo Normale\n")
 }

 if else (temp>-10 && temp<0){

    printf("Freddo\n"); 
 }

 if (temp<-10){
    printf("Gelo Polare\n"); 
 }
 
 
    
 }
 

} 