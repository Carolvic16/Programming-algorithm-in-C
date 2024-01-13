#include <stdio.h>
#include <stdlib.h>

    void classificaDupla(int n1, int n2);

int main(){

    int array1[3];
    int array2[3];
    
    for(int i =0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < 3; i++){
        classificaDupla(array1[i],array2[i]);
    }
        
    
    

    return 0;
}
void classificaDupla(int n1, int n2){
    int temp;
    printf("%d e %d:",n1,n2);
    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf(" %d <= %d\n",n1,n2);
}