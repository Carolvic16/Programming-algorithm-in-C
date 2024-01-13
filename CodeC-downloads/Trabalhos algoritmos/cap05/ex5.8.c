#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[100][100];
    int num;
    int c = 0;
    int linha = sizeof(array) / sizeof(array[0]);
    int coluna = sizeof(array[0]) / sizeof(array[0][0]);

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            array[i][j]; 
        }
    }

    printf("Entre com um numero entre 1 e 100: ");
    scanf("%d", &num);

    if (num< 1 || num> 100) {
        printf("Numero incorreto!\n");
        return 0;
    }else{

        for (int k = 0; k <= num / 2; k++) {
            for (int i = k; i < num - k; i++) {
                for (int j = k; j < num - k; j++) {
                    array[i][j]++;
                }
            }
        }

        
        
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                printf("%3d", array[i][j]);
                if(j != num - 1)
                printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}
