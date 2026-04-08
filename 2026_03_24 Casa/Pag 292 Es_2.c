#include <stdio.h>
#include <string.h>

int main() {
    char v[5][50];

    for(int i = 0; i < 5; i++) {
        scanf("%s", v[i]);
    }

    for(int i = 0; i < 4; i++) {
        if(strcmp(v[i], v[i+1]) < 0) {
            printf("%s ", v[i]);
        }
    }

    return 0;
}