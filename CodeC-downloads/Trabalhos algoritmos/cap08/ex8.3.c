#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );

int main (){

    int totalSeg;
    int horas;
    int minutos;
    int seg;

    printf("Total de segundos:\n ");
    scanf("%d", &totalSeg);
    
    printf("%d segundo(s) corresponde(m) a:\n", totalSeg);

    decompoeTempo( totalSeg, &horas, &minutos, &seg );

    return 0;
}
void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg ){
    *horas = totalSeg / 3600;
    totalSeg %= 3600;
    *minutos = totalSeg / 60;
    *seg = totalSeg %60; 

        printf("    %d hora(s)\n", *horas);
        printf("    %d minuto(s)\n", *minutos);
        printf("    %d segundo(s)\n", *seg);
}