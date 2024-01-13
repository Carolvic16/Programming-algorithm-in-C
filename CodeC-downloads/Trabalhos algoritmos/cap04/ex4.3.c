#include <stdio.h>
#include <stdlib.h>
int main(){

    float somatudo = 0;
    float produto = 1;
    float array[5];

    for(int i = 0; i < 5; i++ ){
        printf("array[%d]:\n",i);
        scanf("%f", &array[i]);
    }

    for(int i=0; i <5; i++){
        somatudo = somatudo + array[i];
        produto = produto * array[i];
    }

    printf("Somatorio: %.2f\n", somatudo);
    printf("Produtorio: %.2f\n", produto);
    
    return 0;
}