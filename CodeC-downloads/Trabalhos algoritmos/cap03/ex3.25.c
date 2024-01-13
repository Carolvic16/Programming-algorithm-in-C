#include <stdio.h>
#include <stdlib.h>
int main (){
    float soma = 0;
    float media = 0;
    int quantidade = 0;
    int valor = 0;
    

    do{
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        if(valor > 0){
            soma = soma + valor; 
            quantidade++;
            media = soma/quantidade;
        }
    }while(valor > 0 );

    printf("Somatorio: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d\n", quantidade);
    return 0;
}