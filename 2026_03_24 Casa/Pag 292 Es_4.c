#include <stdio.h>

int main() {
    char cf[5][20];
    float stip[5], somma = 0, media;

    for(int i = 0; i < 5; i++) {
        scanf("%s %f", cf[i], &stip[i]);
        somma += stip[i];
    }

    media = somma / 5;

    for(int i = 0; i < 5; i++) {
        if(stip[i] < media) {
            printf("%s ", cf[i]);
        }
    }

    return 0;
}