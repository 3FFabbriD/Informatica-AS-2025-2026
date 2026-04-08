#include <stdio.h>
#include <string.h>

int main() {
    char titoli[5][50];
    int copie[5];

    for(int i = 0; i < 5; i++) {
        scanf("%s %d", titoli[i], &copie[i]);
    }

    char cerca[50];
    scanf("%s", cerca);

    for(int i = 0; i < 5; i++) {
        if(strcmp(titoli[i], cerca) == 0) {
            if(copie[i] > 0) {
                copie[i]--;
                printf("Prestito effettuato\n");
            } else {
                printf("Non disponibile\n");
            }
        }
    }

    return 0;
}