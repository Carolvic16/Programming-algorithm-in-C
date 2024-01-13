#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < i; j++) {
                printf("* ");
            }
            
        }

        printf("\n");

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                printf(" *");
            }
        
        }

        printf("\n");
    }

    return 0;
}
