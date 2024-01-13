#include <stdio.h>
#include <stdlib.h>
int main (){

    int array [5];
    int indice = 0;
    
    for(int i = 0; i < 5; i++ ){
        printf("\narray[%d]: ",i);
        scanf("%d", &array[i]);
    } 
    printf("\nBuscar por: ");
    scanf("%d", &indice);

    for( int i = 0; i < 5; i++){
        if(array[i] == indice){
            printf("Indice %0d: ACHEI\n", i);
        }else{
            printf("Indice %0d: NAO ACHEI\n", i);

}
    }
    return 0;
}