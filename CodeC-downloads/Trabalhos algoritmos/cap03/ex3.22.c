#include <stdio.h>
#include <stdlib.h>

int main() {

    int maior;
    int nu1;
    int nu2;
    int nu3;
    int nu4;
    int nu5;

    printf("N1: ");
    scanf("%d", &nu1);    

    printf("N2: ");
    scanf("%d", &nu2);  

    printf("N3: ");
    scanf("%d", &nu3);  

    printf("N4: ");
    scanf("%d", &nu4); 

    printf("N5: ");
    scanf("%d", &nu5);

    if(nu1 < 0 || nu2 < 0 || nu3 < 0 || nu4 < 0 || nu5 < 0){
        printf("Forneca apenas numeros positivos.");
    } else {
        if(nu1 >= nu2 && nu1 >= nu3 && nu1 >= nu4 && nu1 >= nu5){
            maior = nu1;
        } else if (nu2 >= nu1 && nu2 >= nu3 && nu2 >= nu4 && nu2 >= nu5){
            maior = nu2;
        } else if (nu3 >= nu1 && nu3 >= nu2 && nu3 >= nu4 && nu3 >= nu5){
            maior = nu3;
        } else if (nu4 >= nu1 && nu4 >= nu2 && nu4 >= nu3 && nu4 >= nu5){
            maior = nu4;
        } else if (nu5 >= nu1 && nu5 >= nu2 && nu5 >= nu3 && nu5 >= nu4){
            maior = nu5;
        }
    }   

        for(int i = maior; i > 0; i--){
                printf("%04d  ", i);

                if(nu1 >= i){
                    printf("*");
                } else if (nu1 < i){
                    printf(" ");
                }

                if(nu2 >= i){
                    printf("*");
                } else {
                    printf(" ");
                }

                if(nu3 >= i){
                    printf("*");
                } else {
                    printf(" ");
                }

                if(nu4 >= i){
                    printf("*");
                } else {
                    printf(" ");
                }

                if(nu5 >= i){
                    printf("*");
                } else {
                    printf(" ");
                }

                printf("\n");
            }

    return 0;
}