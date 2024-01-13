#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int alfa;
    int beta;
    int gama;
    

    printf("alfa:\n");
    scanf("%d", &alfa);
    printf("beta:\n");
    scanf("%d", &beta);
    printf("gama:\n");
    scanf("%d", &gama);

    if (alfa + beta + gama != 180) { 
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!\n");
        
    }else if(alfa == 90 || beta == 90 || gama == 90){
        printf("Triangulo RETANGULO");

    }else if( alfa > 90 || beta > 90 || gama > 90 ){
    printf("Triangulo OBTUSANGULO");
    } else {
        printf("Triangulo ACUTANGULO");
    }
    
    return 0;
}