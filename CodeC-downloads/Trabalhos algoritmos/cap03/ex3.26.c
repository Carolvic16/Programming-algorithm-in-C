#include <stdio.h>
#include <stdlib.h>
int main (){

    int num;
    int maior = 0;
    int menor = 0;
    int valor = 0;
    
    do{

        printf("Entre com um valor: ");
        scanf("%d", &num);

        if( num >= 0 ){
            if ( valor == 0 ) {
                menor = num;
                maior = num;
            }
            if( num > maior ) {
                maior = num;
            }
            if( num < menor ) {
                menor = num;
            }
            valor++;
        }
    }while ( num >= 0);

    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);


    return 0;
}