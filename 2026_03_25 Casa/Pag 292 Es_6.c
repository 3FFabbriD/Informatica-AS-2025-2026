#include <stdio.h>
#include <string.h>

int main() {
    char squadre[3][20];
    int punti[3];

    for(int i = 0; i < 3; i++) {
        scanf("%s %d", squadre[i], &punti[i]);
    }

    for(int i = 0; i < 2; i++) {
        for(int j = i+1; j < 3; j++) {
            if(punti[i] < punti[j]) {
                int tempP = punti[i];
                punti[i] = punti[j];
                punti[j] = tempP;

                char tempS[20];
                strcpy(tempS, squadre[i]);
                strcpy(squadre[i], squadre[j]);
                strcpy(squadre[j], tempS);
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("%s %d\n", squadre[i], punti[i]);
    }

    return 0;
}