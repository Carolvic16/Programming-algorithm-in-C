#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float num;

    printf("Numero: ");
    scanf("%f", &num);

    
    if(num >= 0){
        double sqrtnum = sqrt(num);
    printf("Raiz quadrada de %.2f: %.2f", num, sqrtnum);
    }else{
        printf("Quadrado de %.2f: %.2f", num, num * num);
}
    return 0;
}