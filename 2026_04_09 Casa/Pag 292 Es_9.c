#include <stdio.h>
#include <string.h>

int main() {
    char citta[5][50];
    int abitanti[5];

    for(int i = 0; i < 5; i++) {
        scanf("%s %d", citta[i], &abitanti[i]);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = i+1; j < 5; j++) {
            if(abitanti[i] > abitanti[j]) {
                int temp = abitanti[i];
                abitanti[i] = abitanti[j];
                abitanti[j] = temp;

                char t[50];
                strcpy(t, citta[i]);
                strcpy(citta[i], citta[j]);
                strcpy(citta[j], t);
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%s %d\n", citta[i], abitanti[i]);
    }

    return 0;
}