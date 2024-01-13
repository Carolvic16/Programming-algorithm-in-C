#include <stdio.h>
#include <stdlib.h>

int main () {
    int h1;
    int h2;
    int m1;
    int m2;
    int soma = 0;
    int multi;

    printf("Idade Homem 1:\n");
    scanf("%d", &h1);
    printf("Idade Homem 2:\n");
    scanf("%d", &h2);
    printf("Idade Mulher 1:\n");
    scanf("%d", &m1);
    printf("Idade Mulher 2:\n");
    scanf("%d", &m2);

    if (h1 >= h2) {
        if (m1 <= m2) {
            soma = h1 + m1;
        } else {
            soma = h1 + m2;
        }
        
    }else if ( m1 <= m2){
        soma = h2 + m1;

    }else {
        soma = h2 + m2;
    }
    printf ("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
    if(m1 >= m2){
        if(h1 <= h2){
        multi = m1 * h1;
        } else {
        multi = m1 * h2;
        }

    }else if (h1 <= h2){
        multi = m2 * h1;

    } else {
        multi = m2 * h2;
    }
    printf("Idade homem mais novo * idade mulher mais velha: %d\n",  multi);
    return 0;
}
