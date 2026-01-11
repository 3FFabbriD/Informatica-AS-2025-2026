#include <stdio.h>
#include <stdlib.h>

void costo_bagaglio() {
    float prezzo_biglietto, peso_bagaglio, costo_peso_bagaglio, costo_totale;
    float differenza_peso;

    printf("Inserire il prezzo del biglietto aereo: ");
    scanf("%f", &prezzo_biglietto); 

    printf("Inserire il peso del bagaglio: "); 
    scanf("%f", &peso_bagaglio); 

    if (peso_bagaglio > 20) {
        differenza_peso = peso_bagaglio - 20; 
        printf("Il bagaglio supera il limite di peso.\n");

        if (differenza_peso >= 1) {
            printf("Dovrà pagare un supplemento del 2%% per ogni chilo sopra il limite.\n"); 
            costo_peso_bagaglio = prezzo_biglietto * 0.02 * differenza_peso;
            costo_totale = prezzo_biglietto + costo_peso_bagaglio; 
            printf("Il nuovo prezzo del biglietto è: %.2f\n", costo_totale); 
        } else {
            printf("Il bagaglio supera il limite di peso ma la differenza è minore di 1kg, quindi il costo del biglietto rimane invariato: %.2f\n", prezzo_biglietto); 
        }
    } else {
        printf("Il bagaglio non supera il limite di peso, arrivederci.\n"); 
    }
}

int main() {
    costo_bagaglio();
    system("pause");
    return 0; 
}
