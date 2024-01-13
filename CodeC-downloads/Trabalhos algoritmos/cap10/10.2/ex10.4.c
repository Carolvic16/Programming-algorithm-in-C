#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int real;
    int imaginaria;
}Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main(){

    Complexo complexo1;
    Complexo complexo2;
    Complexo c;
    

    printf("Complexo 1:");
    printf("\tParte real: ");
    scanf("%d", &complexo1.real);

    
    printf("Complexo 1:");
    printf("\tParte imaginario: ");
    scanf("%d", &complexo1.imaginaria);

    printf("Complexo 2:");
    printf("\tParte real: ");
    scanf("%d", &complexo2.real);

    
    printf("Complexo 2:");
    printf("\tParte imaginario: ");
    scanf("%d", &complexo2.imaginaria);

    Complexo resultado = somar(&complexo1, &complexo2);
    imprimirComplexo(&resultado);


    return 0;
}
Complexo somar( const Complexo *c1, const Complexo *c2 ){

    Complexo c;
    int somar;
    

    somar = c1-> real + c2 -> real;
    somar= c1-> imaginaria + c2 -> imaginaria;

return c;
}

void imprimirComplexo( const Complexo *c ){
    printf("(%.02d + %.02di) + (%.02d + %.02di) = (%.02d + %.02d)", c -> real, c -> imaginaria);
} 