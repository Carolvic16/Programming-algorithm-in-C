#include <stdio.h>
#include <stdlib.h>
int main (){

    float peso =0;
    float media = 0;
    float maior = 0;
    int pessoa = 1;
    int quantidade = 0;
    float soma = 0;

    do{
        printf("Entre com o peso da pessoa %02d: ", pessoa++);
        scanf("%f", &peso);
        printf("\n");

        if(peso > 0){

            if(peso > maior){
                maior = peso;
            }

            if( peso > 60){
            quantidade++;
            soma = soma + peso;
            media = soma/quantidade;   
            }
            
        }
    }while(peso >= 0);

    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", maior);

    return 0;
}