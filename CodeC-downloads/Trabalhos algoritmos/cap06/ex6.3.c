#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float num;


    printf("\nNumero: ");
    scanf("%f", &num);

    double ceilnum = ceil(num);
    double floornum = floor(num);

    printf("\nMaior inteiro mais proximo: %.02f", ceilnum);
    printf("\nMenor inteiro mais proximo: %.02f", floornum);


    return 0;
}