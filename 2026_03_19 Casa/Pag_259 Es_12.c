#include <stdio.h>

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Numeri primi:\n");

    for(int i = 0; i < 10; i++) {
        int num = v[i];
        int primo = 1;

        if(num < 2) primo = 0;

        for(int j = 2; j < num; j++) {
            if(num % j == 0) {
                primo = 0;
                break;
            }
        }

        if(primo) {
            printf("%d ", num);
        }
    }

    return 0;
}