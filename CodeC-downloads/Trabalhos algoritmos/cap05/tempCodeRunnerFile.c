#include <stdio.h>
#include <stdlib.h>

int main() {
    int array1[3][4] = {0};
    int array2[3][4] = {0};
    int arraymult[3][4] = {0};
    int linha = sizeof(array1) / sizeof(array1[0]);
    int coluna = sizeof(array1[0]) / sizeof(array1[0][0]);

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("\narray2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        
    
        printf("\nMultiplicar por: ");
        scanf("%d", &arraymult[i][j]);

    }    
    }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            arraymult[i][j] = arraymult[i][j] * array1 [i][j] * array2[i][j];
        }
    }
    printf("\narrayMulti:");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%03d ", arraymult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
