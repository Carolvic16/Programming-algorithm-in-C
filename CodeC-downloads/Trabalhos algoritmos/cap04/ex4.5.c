#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int num =0;

    for(int i = 0; i < 5; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nBuscar por: ");
    scanf("%d", &num);

    int count = 0;
    for(int i = 0; i < 5; i++){
        if(array[i] == num){
            count++;
        }
    }
    if(count <= 1){
    printf("O array contem %d ocorrencia do valor %d.", count, num);
    } else{
        printf("O array contem %d ocorrencias do valor %d.", count, num);
    }
    if(count == 0)
    printf("O array nao contem o valor %d.", num);

    return 0;
}
