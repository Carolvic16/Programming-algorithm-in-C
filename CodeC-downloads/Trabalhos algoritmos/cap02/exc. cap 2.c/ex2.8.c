#include <stdio.h>
#include <stdlib.h>
int main (){

    int n1;
    int n2;
    int n3;
    float r;

    printf("N1:\n");
    scanf("%d", &n1);
    printf("N2:\n");
    scanf("%d", &n2);
    printf("N3:\n");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        if (n2 >= n3) {
            r = n1 + n2;
        } else {
            r = n1 + n3;
        }
    } else if (n2 >= n1 && n2 >= n3) {
        if (n1 >= n3) {
            r = n2 + n1;
        } else {
            r = n2 + n3;
        }
    } else if (n3 >= n1 && n3 >= n2) {
        if (n1 >= n2) {
            r = n3 + n1;
        } else {
            r = n3 + n2;
        }
    }
    printf("A soma dos dois numeros maiores fornecidos e %.2f\n", r);
    return 0;
}