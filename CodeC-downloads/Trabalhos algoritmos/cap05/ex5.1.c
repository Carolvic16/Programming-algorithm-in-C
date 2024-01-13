#include <stdio.h>
#include <stdlib.h>
int main (){
    int array [3] [2] = {0};
    int linhas = (int) ( sizeof( array ) / sizeof( array[0] ) );
    int colunas = (int) ( sizeof( array[0] ) / sizeof( array[0][0] ) );

    

    for(int i= 0; i < linhas; i++){
        for( int j = 0; j < colunas; j ++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for( int i = 0; i < linhas; i++){
        for( int j = 0; j< colunas; j++){
        printf("%03d", array[i][j]);
        if(j % 2 == 0){
        printf(" ");
        
        }
    }
    printf("\n");
    }

    printf("\n");

    return 0;
}