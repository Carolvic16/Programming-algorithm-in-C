#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float Fahrenheit;
    float Celcius;
    float resposta;
    char opc;

    

    printf("Escolha uma operação de acordo com o menu:\n");
    printf("C) Celsius -> Fahrenheit;\n");
    printf("F) Fahrenheit -> Celsius.\n");
    printf("Opcao:\n");
    scanf(" %c", &opc);

    switch( opc ){
        case 'C':
        printf("Entre com a temperatura em graus Celsius:\n");
        scanf("%f", &Celcius);
        resposta = 1.8 * Celcius + 32;
        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", Celcius, resposta);
        break;

        case 'F':
        printf("Entre com a temperatura em graus Fahrenheit:\n");
        scanf("%f", &Fahrenheit);
        resposta = (Fahrenheit - 32) / 1.8;
        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", Fahrenheit,resposta);
        break;

        default:
        printf("Opcao invalida!");
    break;

        


    }
    
    return 0;
}