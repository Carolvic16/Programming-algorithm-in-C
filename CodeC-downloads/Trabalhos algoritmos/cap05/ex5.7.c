#include <stdio.h>
#include <stdlib.h>

int main(){
    int arrayA[3][2] = {0};
    int arrayB[2][3] = {0};
    int arrayAB[3][3] = {0};
    int lA = (int)(sizeof(arrayA)/sizeof(arrayA[0]));
    int cA = (int)(sizeof(arrayA[0])/sizeof(arrayA[0][0]));
    int lB = (int)(sizeof(arrayB)/sizeof(arrayB[0]));
    int cB = (int)(sizeof(arrayB[0])/sizeof(arrayB[0][0]));

    for(int i = 0; i < lA; i++){
        for(int j = 0; j < cA; j++){
            printf( "array1[%d][%d]: ", i,j);
            scanf( "%d", &arrayA[i][j] );
        }
    }
    for(int i = 0; i<lB ; i++){
        for(int j = 0 ; j<cB ; j++){
            printf("array2[%d][%d]: ", i,j);
            scanf("%d", &arrayB[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++) {
                arrayAB[i][j] += arrayA[i][k] * arrayB[k][j];
            }
        }
        
    }
    printf("\nA x B =\n");
    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){
            printf("%03d",arrayAB[i][j]);
            if(j == 2){
                printf("\n");
            }else{
                printf(" ");
            }
        }  
    }

    return 0;
}