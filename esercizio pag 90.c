#include <stdio.h>
#include <stdlib.h>

void controllo (){
    char nome [15]; 
    int età; 
    printf("inserire il nome"); 
    scanf("%s", nome);

    printf("inserire l'età"); 
    scanf("%d", età); 

    if (età>=18)
    {
    printf("%s" "è maggiorenne\n", nome); 
    }
    
}

int main (){
    controllo();
    system("pause");
    return 0; 
}