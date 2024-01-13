#include <stdio.h>
#include <stdlib.h>


int somaDivisores();
int lePositivo();

int main(){

    int somadiv;
    int arrayn[5] = {0};
    int larrayn = (int)(sizeof(arrayn)/sizeof(arrayn[0]));

    for(int i = 0; i < larrayn; i++){
        printf("\nn[%d]: ",i);
        arrayn[i] = lePositivo();
    }

    for(int i = 0; i < larrayn; i++){
        somadiv = somaDivisores(arrayn[i]);
        printf("\nSoma dos divisores de %d: %d",arrayn[i],somadiv);
    }
    

    return 0;
}

int lePositivo(){
    int num;
    do{
        scanf("%d", &num);
        if (num <= 0){
            printf("\nEntre com um valor positivo:");
        }
    }while (num <= 0);

    return num; 
}

int somaDivisores(int n){
    int somad = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            somad += i;
        }
        
    }
    return somad;
}
