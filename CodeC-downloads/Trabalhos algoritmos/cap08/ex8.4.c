#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );
bool ehBissexto( int ano );

int main (){

    int diaDoAno;
    int ano;
    int mes;
    int dia;
    

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);
    printf("Ano:");
    scanf("%d", &ano);

decompoeData(diaDoAno, ano, &mes, &dia );

printf("O dia %d do ano %d cai no dia %d do mes %d.\n", diaDoAno, ano, dia, mes);

    return 0;
}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ){
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(ehBissexto(ano)){
    a[1]=29;
}
int i =0;

while(diaDoAno > a[i]){
    diaDoAno -= a[i];
    i++;
}
  *mes = i + 1;
  *dia = diaDoAno;
}

    bool ehBissexto( int ano ){
    if(ano % 4 == 0){
    return true;
    } else {
        return false;
    }
}


