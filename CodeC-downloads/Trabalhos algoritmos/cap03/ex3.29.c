#include <stdio.h>
#include <stdlib.h>
int main (){

    int n1;
    int n2;
    int divisao;
    char c;

    do{
        printf("N1: ");
        scanf("%d", &n1);
        printf("N2: ");
        scanf("%d", &n2);

        while(n2 ==0){
            printf("Nao existe divisao inteira por zero!");
            printf("\nEntre novamente com N2: ");
            scanf("%d", &n2);
        }
        divisao = n1/n2;
        printf("%d / %d = %d", n1, n2, divisao);
        printf("\nVoce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &c);


    }while(c == 'S');
    


    return 0;
} 