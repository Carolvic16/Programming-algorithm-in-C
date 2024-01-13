#include <stdio.h>
#include <stdlib.h>

void classificaTrinca(int n1, int n2, int n3);

int main (){

    int array [3];
    int array2 [3];
    int array3 [3];

    for(int i =0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array3[i]);
    }
    for(int i =0; i < 3; i++){
        classificaTrinca(array[i], array2[i], array3[i]);
    }

    return 0;
}
void classificaTrinca(int n1, int n2, int n3){
    int temp;
    int temp2;
    printf("%d, %d e %d:",n1,n2,n3);
    if(n2 < n1 && n1 < n3){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }else if(n3 < n2 && n2 < n1){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }else if(n2 < n3 && n3 < n1){
        temp = n2;
        n2 = n3;
        temp2 = n1;
        n1 = temp;
        n3 = temp2;
    }else if(n3 < n1 && n1 < n2){
        temp = n1;
        n1 = n3;
        temp2 = n3;
        n3 = temp;
        n2 = temp2;
    }else if(n1 < n3 && n3 < n2){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    printf(" %d <= %d <= %d\n",n1,n2,n3);
}
