#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


    void  imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente);

int main(){

    int array1[5];
    int array2[5];
    bool impreme;
    
    for(int i =0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < 5; i++){
        impreme = i % 2 == 0? true : false;
        imprimeDuplaClassificada(array1[i],array2[i],impreme);
    }
        
    
    

    return 0;
}
void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente ){
    int temp;
    printf("%d e %d:",n1,n2);
    if(emOrdemCrescente == true){
        if(n2 < n1){
            temp = n2;
            n2 = n1;
            n1 = temp; 
        }
        printf(" %d <= %d\n",n1,n2);
    }else{
        if(n2 > n1){
            temp = n1;
            n2 = n1;
            n1 = temp;
        }
        printf(" %d >= %d\n",n1,n2);
    }
}