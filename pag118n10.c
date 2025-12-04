#include <stdio.h>
#include <stdlib.h>

int main(){

int età;

printf("Inserisci l'età dell'individuo: \n");
scanf("%d", &età);

if (età>=14){

printf("l'individuo può guidare i seguenti veicoli: \n");

printf("moto con cilindrata massima di 50cc \n"); 

if (età>=16){

printf("moto con cilindrata massima di 125cc \n");

}

if (età>=18){

printf("auto con massimo 95cv: \n"); 

}

if (età>=21){

printf("moto di qualsiasi cilindrata e qualsiasi potenza: \n ");

}


}
else{
printf("l'individuo non può guidare nessun veicolo");    
}
}