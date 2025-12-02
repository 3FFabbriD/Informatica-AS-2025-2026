#include <stdio.h>
#include <stdlib.h>

int main(){
char carattere; 

printf("inserire il carattere");
scanf(" %c", &carattere); 

switch (carattere)
{
case 'S':
    printf("hai scelto la parola sì!"); 
    break;

case 's':
    printf("hai scelto la parola sì!"); 
    break;

case 'N': 
    printf("hai scelto la parola no!"); 
    break;

case 'n': 
    printf("hai scelto la parola no!"); 
    break;

default:
    printf("carattere errato"); 
    break;
}
}