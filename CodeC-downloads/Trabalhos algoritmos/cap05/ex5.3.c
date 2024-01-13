#include <stdio.h>
#include <stdlib.h>

int main() {
    int array1[3][4];
    int arraymult[3][4];
    int linha = (int) ( sizeof( array1) / sizeof( array1[0] ) );
    int coluna = (int) ( sizeof( array1[0] ) / sizeof( array1[0][0] ) );


    int multi;

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    
            printf("\nMultiplicar por: ");
            scanf("%d",&multi);
            
            

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            
            
            arraymult[i][j] = array1 [i][j]* multi;
        }
    }
    printf("\narrayMult:\n");
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("%03d", arraymult[i][j]);
            if(j == 3){
            printf("\n");
            }else{
                printf(" ");
            }
        
            
            
        }
    }
    printf("\n");
    
    return 0;
}
