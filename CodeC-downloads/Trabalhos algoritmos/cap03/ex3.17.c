#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1;
    int fbase = 0;
    int f1 = 1;
    int f0 = 0;

    printf("Termo desejado: ");
    scanf("%d", &n1);

    if( n1 == 0 || n1 == 1){
        printf("Fibonacci de %d e %d ", n1, f1);
    }else{
        for(int i = 1; i <= n1; i++){
            fbase = f1 + f0;
            f0 = f1;
            f1 = fbase;
        }
        printf("Fibonacci de %d e %d ", n1, fbase);
    }
    return 0;
}
