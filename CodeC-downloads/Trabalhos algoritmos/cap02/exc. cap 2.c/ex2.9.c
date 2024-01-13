#include <stdio.h>
#include <stdlib.h>

int main() {
    float lados;
    float medida;
    float a;
    float perimetro;

    printf("Entre com a quantidade de lados:\n");
    scanf("%f", &lados);
    printf("Entre com a medida do lado:\n");
    scanf("%f", &medida);

    if(lados == 3) {
        perimetro = 3 * medida;
        printf("TRIANGULO de perimetro %.2f", perimetro);
    }else if(lados == 4) {
        a = medida * medida;
        printf("QUADRADO de area %.2f", a);
    }else if(lados > 5) {
        printf("Poligono nao identificado");
    }else if(lados == 5){
        printf("PENTAGONO");

    }

    return 0;
}
