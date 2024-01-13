#include <stdio.h>

int main() {
    int array[2][3];
    int array2[3][2];
    int linha = sizeof(array) / sizeof(array[0]);
    int coluna = sizeof(array[0]) / sizeof(array[0][0]);

    // Preencher a matriz original
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Calcular a matriz transposta
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            array2[j][i] = array[i][j];
        }
    }

    // Exibir a matriz original
    printf("M:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%03d", array[i][j]);
            if( j != 2)
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Exibir a matriz transposta
    printf("Mt:\n");
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            printf("%03d", array2[i][j]);
            if(j != 1)
            printf(" ");

        }
        printf("\n");
    }

    return 0;
}
