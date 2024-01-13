#include <stdio.h>
#include <stdlib.h>
int main(){
    
    float n1;
    float n2;
    float r;

    printf("Entre com um numero:\n");
    scanf("%f", &n1);
    printf("Entre com outro numero:\n");
    scanf("%f", &n2);

    if(n1 + n2 >= 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", n1,n2);
        
    }else if(n1 + n2 <= 10){
        r = n1 - n2;
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", n1,n2,r);

    }
    return 0;
}
