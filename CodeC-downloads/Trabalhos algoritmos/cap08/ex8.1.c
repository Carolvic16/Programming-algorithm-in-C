#include <stdio.h>
#include <stdlib.h>

void somatorioMedia( float a[], int n, float *somatorio, float *media );

int main (){

float a[10];
int n = 10; 
float somatorio;
float media;


for ( int i = 0; i < 10; i++){

    printf("\nn[%d]: ", i);
    scanf("%f", &a[i]);
}
    somatorioMedia(a, n, &somatorio, &media);

    return 0;
}
void somatorioMedia( float a[], int n, float *somatorio, float *media ){

    for(int i = 0; i < 10; i++){
    *somatorio += a[i];
    }
     *media = *somatorio / 10;
    
    printf("\nSomatorio: %.2f", *somatorio);
    printf("\nMedia: %.2f", *media);
}

