#include <stdio.h>
#include <stdlib.h>
int main (){

    int num1;
    int num2;
    int par = 0 ;

    printf("N1: ");
    scanf("%d", &num1);
    printf("N2: ");
    scanf("%d", &num2);

    if( num1 <  num2){
        for( int i = num1; i <= num2; i++){
            if( i % 2 == 0){
                par++;

            }
        }
    printf("Numeros pares entre %d e %d: %d", num1, num2, par);
    }else{
        for(int i = num1; i >= num2; i--){
            if(i % 2 == 0){
                par++;
            }
        }
        printf("Numeros pares entre %d e %d: %d", num2, num1, par);
    } 
    return 0;
}