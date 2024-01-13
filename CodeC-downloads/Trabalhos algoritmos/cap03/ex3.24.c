#include <stdio.h>
#include <stdlib.h>
int main (){
    int idade = 0;
    int idadeMenos21 = 0;
    int idadeMais50 = 0;
    int pessoa = 1;

    do {
        printf("Idade da pessoa %02d: \n", pessoa++);
        scanf("%d", &idade);

        if(idade >= 0){
            if(idade < 21){
                idadeMenos21++;

            }else if (idade > 50){
                idadeMais50++;
            }
        }
    }while ( idade >= 0);

    printf("Total de pessoas menores de 21 anos: %d\n", idadeMenos21);
    printf("Total de pessoas com mais de 50 anos: %d\n", idadeMais50); 
    
        return 0;
}