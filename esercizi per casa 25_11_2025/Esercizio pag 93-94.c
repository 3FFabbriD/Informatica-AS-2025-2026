#include <stdio.h>
#include <stdlib.h>

void massimo(){
    int num1,num2,num3,max; 
    printf("inserire il primo numero");
    scanf("%d", &num1); 

    printf("inserire il secondo numero");
    scanf("%d", &num2);
    
    printf("inserire il terzo numero");
    scanf("%d", &num3); 

    max=num1;

    if(num2>max){
        max=num2;
    }
    if(num3>max){
        max=num3;
    }
    printf("il numero maggiore è %d\n", max); 

}

int main (){
    massimo();
    system("pause"); 
    return 0; 
}