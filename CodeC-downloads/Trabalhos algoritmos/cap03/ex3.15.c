#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    int fat = 1;

    printf("Numero: ");
    scanf("%d", &num);

    if(num > 0){
        for(int i = num; i > 0; i--){
            fat = fat * i;
        }
        printf("%d! = %d", num, fat);
    }
    if(num < 0){
    printf("Nao ha fatorial de numero negativo.");
    }

    return 0;
}
