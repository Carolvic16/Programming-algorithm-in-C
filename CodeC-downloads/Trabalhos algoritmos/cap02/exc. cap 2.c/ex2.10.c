#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    float a;
    float b;
    float c;
    

    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);

if(a != b && b != c && c != a){
    printf("Triangulo ESCALENO");
} else if(a == b && b == c){
    printf("Triangulo EQUILATERO");
} else {
    printf("Triangulo ISOSCELES");

}if (a + b <= c || a + c <= b || b + c <= a) {
    printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
} else {

}



        
        return 0;
}
