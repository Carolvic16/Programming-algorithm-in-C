#include <stdio.h>
#include <stdlib.h>
int main (){

    int num1;
    int num2;
    
    printf("N1: ");
    scanf("%d", &num1);
    printf("N2: ");
    scanf("%d", &num2);

if( num1 < num2){
    for(int i = num1; i <= num2; i++ ){
        printf("%d ",i);
    }
} else if( num2 < num1){
    for(int j = num1; j >= num2; j--){
        printf("%d ", j);
    }
}
    return 0;
}