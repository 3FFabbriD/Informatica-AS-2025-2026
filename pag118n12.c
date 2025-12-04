#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    int eta1, eta2, eta3;
    
    printf("Inserisci l'età del primo fratello: ");
    scanf("%d", &eta1); 

    printf("Inserisci l'età del secondo fratello: ");
    scanf("%d", &eta2);

    printf("Inserisci l'età del terzo fratello: ");
    scanf("%d", &eta3);

   
    int max_eta = eta1;
    int min_eta = eta1; 

    
    if (eta2 > max_eta) {
        max_eta = eta2;
    }
    if (eta2 < min_eta) {
        min_eta = eta2;
    }

    
    if (eta3 > max_eta) {
        max_eta = eta3;
    }
    if (eta3 < min_eta) {
        min_eta = eta3;
    }


    
    int differenza = max_eta - min_eta;

    printf("\n--- Risultato ---\n");
    printf("Età maggiore: %d\n", max_eta);
    printf("Età minore: %d\n", min_eta);
    printf("La differenza di età tra il maggiore e il minore è: **%d anni**\n", differenza);

    return 0;
}