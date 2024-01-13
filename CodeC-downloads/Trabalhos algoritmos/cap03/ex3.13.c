#include <stdio.h>
#include <stdlib.h>
int main (){

    int n1;
    int n2;
    int multi2 = 0;
    int multi3 = 0;
    int multi4 = 0;

    printf("N1: ");
    scanf("%d", &n1);
    printf("\nN2: ");
    scanf("%d", &n2);

    if( n1 < n2){
        for(int i = n1; i <= n2; i++){
            if( i % 2 == 0){
                multi2++;
            }
            if( i % 3 == 0){
                multi3++;
            }
            if(i % 4 == 0){
                multi4++;
            }
        }
        printf("\nMultiplos de 2: %d",multi2);
        printf("\nMultiplos de 3: %d",multi3);
        printf("\nMultiplos de 4: %d",multi4);
    }
        if( n1 > n2){
        for(int i = n1; i >= n2; i--){
            if(i % 2 == 0){
                multi2++;
            }if( i% 3 == 0){
                multi3++;

            }if( i% 4 == 0){
                multi4++;

            }
        }
        printf("\nMultiplos de 2: %d",multi2);
        printf("\nMultiplos de 3: %d",multi3);
        printf("\nMultiplos de 4: %d",multi4);
    }

    return 0;
}