#include <stdio.h>
#include <stdlib.h>

void calcolo(){
float t1,t2,t3,media,limite; 

printf("inserire la temperatura nella 1' zona");
scanf("%f", &t1);

printf("inserire la temperatura nella 2' zona");
scanf("%f", &t2);

printf("inserire la temperatura nella 3' zona");
scanf("%f", &t3);

printf("inserire inserire il limite di accensione");
scanf("%f", &limite);

media=(t1+t2+t3)/3;

if (media>limite) 
{
printf("il riscaldamento verrà acceso"); 
}

else{
printf("il riscaldamento NON verrà acceso");     
}

}

int main(){

calcolo();
system("PAUSE");
return 0;     
}