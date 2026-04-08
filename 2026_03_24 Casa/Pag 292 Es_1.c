#include <stdio.h>
#include <string.h>

int main() {
    char v[5][50], temp[50];

    for(int i = 0; i < 5; i++) {
        scanf("%s", v[i]);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(v[i], v[j]) > 0) {
                strcpy(temp, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], temp);
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%s\n", v[i]);
    }

    return 0;
}