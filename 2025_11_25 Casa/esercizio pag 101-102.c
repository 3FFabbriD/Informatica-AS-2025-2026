#include <stdio.h>
#include <stdlib.h>

void operazioni() {
    float n1, n2, ris; 
    char operatore;

    printf("Inserire il primo numero: ");
    scanf("%f", &n1); 

    printf("Inserire il secondo numero: ");
    scanf("%f", &n2);

    printf("Inserire l'operatore (+, -, *, /): ");
    scanf(" %c", &operatore);  // spazio prima di %c per ignorare newline

    switch (operatore) {
        case '+':
            ris = n1 + n2; 
            printf("Somma = %3.3f\n", ris); 
            break;

        case '-':
            ris = n1 - n2; 
            printf("Differenza = %3.3f\n", ris); 
            break;

        case '*':
            ris = n1 * n2; 
            printf("Prodotto = %3.3f\n", ris); 
            break;

        case '/':
            if (n2 == 0) {
                printf("Errore: divisione per zero!\n");
            } else { 
                ris = n1 / n2;
                printf("Divisione = %3.3f\n", ris);
            } 
            break;

        default: 
            printf("Operazione inesistente\n");
            break; 
    }
}

int main() {
    operazioni();
    system("pause");  // va bene su Windows
    return 0; 
}
