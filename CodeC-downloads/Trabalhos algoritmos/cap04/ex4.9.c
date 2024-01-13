#include <stdio.h>
#include <stdlib.h>
int main (){

    int array [5];
    int arrayInv [5];
    int cont = 0;

    for(int i = 0; i < 5; i++){
        printf(" \narray1[%d]: ", i);
        scanf("%d", &array[i]);
        cont++;
    }

    for(int i = 0; i < 5; i++) {
        arrayInv[4-i] = array[i];
    }


    for(int i = 0; i < 5; i++){
        printf("\narrayInv[%d] = %d", i,arrayInv[i]);
        
    
    }


    return 0;
}