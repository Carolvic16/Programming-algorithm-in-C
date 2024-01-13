#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura;

    printf("Altura: ");
    scanf("%d", &altura);
    printf("\n");

    if(altura > 0){
        for(int i = 0; i < altura; i++){
            for (int j = i+1; j < altura; j++){
                printf(" ");
            }for(int k = 0; k <= i; k++){
                printf("*");
                if(k > 0){
                    printf("*");
                }
            }
            printf("\n");
        }
    }else{
        altura *= -1;
        for(int i = altura; i > 0; i--){
            for (int j = i+1; j <= altura; j++){
                printf(" ");
            }for(int k = 0; k <= i-1; k++){
                printf("*");
                if(k > 0){
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
