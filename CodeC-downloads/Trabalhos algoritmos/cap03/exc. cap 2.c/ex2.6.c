#include <stdio.h>
#include <stdlib.h>
int main(){

    float n;
    float r;
    
    printf("Entre com um valor:\n");
    scanf("%f", &n);

    if(n >= 20) {
        r = n / 2;
        printf("A metade de %.2f e %.2f", n,r);

    }else if( n <= 20) {
        r = n * 3;
        printf("O triplo de %.2f e %.2f ", n,r);

    }

    return 0;
}
