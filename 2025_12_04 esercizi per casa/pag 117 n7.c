#include <stdio.h>
#include <stdlib.h>

void calcolo_intervallo(){
float n;

printf("inserire il numero");
scanf("%f", &n); 

if (n>10 || n<-5){
printf("il numero è fuori dall'intervallo");     
}

else{
printf("OK");     
}

}

int main (){
calcolo_intervallo();

system("PAUSE"); 

return 0; 
}