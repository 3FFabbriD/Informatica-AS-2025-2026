#include <stdio.h>
#include <stdlib.h>

void calcolo(){
int n1,n2,n3; 

printf("inserire il 1 numero: ");
scanf("%d", &n1);

printf("inserire il 2 numero: ");
scanf("%d", &n2);

printf("inserire il 3 numero: ");
scanf("%d", &n3);

if (n3-n2==n2-n1){
printf("i numeri sono in successione aritmetica.\n ");    
}
else {
printf("i numeri NON sono in successione aritmetica.\n ");     
}

}

int main (){

calcolo();
system ("PAUSE");
return 0; 
}