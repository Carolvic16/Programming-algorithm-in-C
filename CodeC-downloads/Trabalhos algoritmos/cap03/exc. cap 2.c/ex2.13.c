#include <stdio.h>
#include <stdlib.h>
int main (){

    float av1;
    float av2;
    float op;
    float media;
    
    printf("Nota Av. 1:\n");
    scanf("%f",&av1);
    printf("Nota Av. 2:\n");
    scanf("%f", &av2);
    printf("Nota Optativa:\n");
    scanf("%f", &op);

    if (op >= 0) {
        if (av1 <= av2 && av1 < op) {
            av1 = op;
        } else if (av2 < av1 && av2 < op) {
            av2 = op;
        }
    }

    media = (av1 + av2) / 2;

    if (media >= 6.0) {
        printf("Media: %.2f\nAprovado!\n", media);
    } else if (media >= 4.0) {
        printf("Media: %.2f\nExame.\n", media);
    } else {
        printf("Media: %.2f\nReprovado...\n", media);
    }
    
    return 0;
}