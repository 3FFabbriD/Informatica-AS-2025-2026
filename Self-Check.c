#include <stdio.h>
#include <string.h>

#define MAX_STUDENTI 10

struct Studente {
    char nome[30];
    char cognome[30];
    float voto;
};

void cercaStudente(struct Studente elenco[], int n, char cognomeCercato[]);

int main() {
    struct Studente classe[MAX_STUDENTI];
    int n = 0;
    
    do {
        printf("Quanti studenti vuoi inserire? (da 1 a %d): ", MAX_STUDENTI);
        scanf("%d", &n);
        if (n < 1 || n > MAX_STUDENTI) {
            printf("Errore! Il numero deve essere compreso tra 1 e %d.\n", MAX_STUDENTI);
        }
    } while (n < 1 || n > MAX_STUDENTI);

    printf("\n--- INSERIMENTO DATI ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudente %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", classe[i].nome);
        printf("Cognome: ");
        scanf("%s", classe[i].cognome);
        printf("Voto: ");
        scanf("%f", &classe[i].voto);
    }

    printf("\n--- ELENCO STUDENTI ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d) %s %s - Voto: %.2f\n", i + 1, classe[i].nome, classe[i].cognome, classe[i].voto);
    }

    float somma = 0;
    int sufficienti = 0;
    int indiceMigliore = 0;

    for (int i = 0; i < n; i++) {
        somma += classe[i].voto;

        if (classe[i].voto >= 6.0) {
            sufficienti++;
        }

        if (classe[i].voto > classe[indiceMigliore].voto) {
            indiceMigliore = i;
        }
    }

    printf("\n--- STATISTICHE ---\n");
    printf("Media dei voti: %.2f\n", somma / n);
    printf("Studente con il voto piu' alto: %s %s (Voto: %.2f)\n", 
           classe[indiceMigliore].nome, classe[indiceMigliore].cognome, classe[indiceMigliore].voto);
    printf("Studenti con voto sufficiente (>= 6): %d\n", sufficienti);

    char cognomeCercato[30];
    printf("\n--- RICERCA STUDENTE ---\n");
    printf("Inserisci il cognome dello studente da cercare: ");
    scanf("%s", cognomeCercato);
    
    cercaStudente(classe, n, cognomeCercato);

    return 0;
}

void cercaStudente(struct Studente elenco[], int n, char cognomeCercato[]) {
    int trovato = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(elenco[i].cognome, cognomeCercato) == 0) {
            printf("Studente trovato: %s %s, Voto: %.2f\n", elenco[i].nome, elenco[i].cognome, elenco[i].voto);
            trovato = 1;
        }
    }

    if (!trovato) {
        printf("Studente con cognome '%s' non presente in registro.\n", cognomeCercato);
    }
}