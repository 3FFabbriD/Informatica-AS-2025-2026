#include <stdio.h>

int main() {
    char registi[5][50];
    int incassi[5];
    int max = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%s %d", registi[i], &incassi[i]);
        if(incassi[i] > incassi[max]) max = i;
    }

    printf("Regista max incasso: %s\n", registi[max]);

    return 0;
}