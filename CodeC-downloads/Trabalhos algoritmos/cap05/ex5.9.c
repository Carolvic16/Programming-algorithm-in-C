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

    printf("\n");

    if(num <= 0 || num >100){
        printf("Numero incorreto!");
    }else{
        for(int i = 0; i < num; i++){ 
            for(int j = 0; j < num; j++){
                    c = (i-j);
                    if(c>0){
                        array[i][j] = c+1;
                    }else{
                        array[i][j] = (c*(-1))+1;
                    }
            }  
        }

        for(int i = 0; i < num; i++){ 
            for(int j = 0; j < num; j++){
                if(j == num - 1){
                    printf("%3d",array[i][j]);
                    printf("\n");
                }else{
                    printf("%3d ",array[i][j]);
                }
            }  
        }

    }
    return 0;
}
 