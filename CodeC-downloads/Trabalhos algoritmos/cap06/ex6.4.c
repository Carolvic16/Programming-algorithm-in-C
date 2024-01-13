#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float num;

    printf("Numero: ");
    scanf("%f", &num);

    double fabsnum = fabs(num);

    printf("Valor absoluto: %.2f", fabsnum);

    
    return 0;
}