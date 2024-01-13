#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main (){

    for(int i = 1; i <= 20; i++){
        printf("\n%d: ", i);
    

    if(ehPrimo (i)){
        printf("eh primo", i);

    }else{
        printf("nao eh primo", i);
    }
    }
    return 0;
}
bool ehPrimo(int n){
if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    
    }
    return true;
}