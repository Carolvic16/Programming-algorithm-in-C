#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){

    bool eleitor;
    int idade;

    printf("Entre com sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65) {
        eleitor = true;
        printf("Eleitor obrigatorio.\n");
    } else if (idade >= 16 ) {
        eleitor = true;
        printf("Eleitor facultativo.\n");
    } else if( idade > 65 ){
        eleitor = true;
        printf("Eleitor facultativo.");
        
    } else{
    eleitor = false;
        printf("Nao eleitor.\n");
    }
    return 0;
}
