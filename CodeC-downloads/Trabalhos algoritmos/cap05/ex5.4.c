#include <stdio.h>
#include <stdlib.h>
int main (){
    int array [2][2];
    int determinante;
    int linha = (int) ( sizeof( array ) / sizeof( array[0] ) );
    int coluna = (int) ( sizeof( array[0] ) / sizeof( array[0][0] ) );

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    determinante = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);

    printf("Determinante: %d", determinante);


    return 0;
}