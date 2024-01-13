#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaCircu (float raio);
float circuferenciiaCircu (float raio);
int main(){

    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Area = %.2f\n", areaCircu (raio));
    printf("Circunferencia = %.2f\n", circuferenciiaCircu (raio));
    



    return 0;
}
float areaCircu (float raio){
    return acos(-1)* raio *raio;


}
float circuferenciiaCircu (float raio){
    return 2 * acos(-1) * raio;

}