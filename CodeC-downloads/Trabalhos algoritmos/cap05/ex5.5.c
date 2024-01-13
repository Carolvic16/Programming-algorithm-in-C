#include <stdio.h>
#include <stdlib.h>
int main (){
    int array [3][3];
    int determinate;
    int linha = (int) ( sizeof( array ) / sizeof( array[0] ) );
    int coluna = (int) ( sizeof( array[0] ) / sizeof( array[0][0] ) );

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
       determinate = (array[0][0] * array[1][1] * array[2][2] + array[0][1] * array[1][2] * array[2][0] + array[0][2] * array[1][0] * array[2][1]) - (array[0][2] * array[1][1] * array[2][0] + array[0][0] * array[1][2] * array[2][1] + array[0][1] * array[1][0] * array[2][2]);


    printf("Determinante: %d", determinate);
    return 0;
}