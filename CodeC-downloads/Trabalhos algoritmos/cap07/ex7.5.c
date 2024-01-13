#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

bool ehPar(int n);
bool ehDivisivel(int dividendo, int divisor);

int main() {

    int array1[5];
    int array2[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    
    for(int j = 0; j < 5; j++){
        if(ehPar(array1[j]) == true ){
            printf("%d eh par",array1[j]);
        }else{
            printf("%d eh impar", array1[j]);
        }
    

    if (ehDivisivel(array1[j], array2[j]) == true) {
    printf(" e %d eh divisivel por %d", array1[j], array2[j]);
} else {
    printf(" e %d nao eh divisivel por %d", array1[j], array2[j]);
}
    printf("\n");
    
    }
    return 0;

}
bool ehPar(int n){
    if(n %2 ==0){
        return true;
    }else{
        return false;
    }

}
bool ehDivisivel(int dividendo, int divisor){
    if(dividendo %divisor == 0){
        return true;
    }else{
        return false;
    }

}

// teste: 8, 7, 21,9,10