#include <stdio.h>

int main() {
    int v1[20], v2[20];

    for(int i = 0; i < 20; i++) {
        scanf("%d", &v1[i]);
    }

    for(int i = 0; i < 20; i++) {
        scanf("%d", &v2[i]);
    }

    printf("Elementi in comune:\n");

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            if(v1[i] == v2[j]) {
                printf("%d ", v1[i]);
                break;
            }
        }
    }

    return 0;
}