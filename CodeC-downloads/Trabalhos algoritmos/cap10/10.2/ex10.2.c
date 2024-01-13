#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int dia;
    int mes; 
    int ano;
}Data;

 int diaDoAno( const Data *data );
bool ehBissexto (int ano);

int main(){
    Data data;

    printf("dia:");
    printf("\tdia: ");
    scanf("%d",&data.dia);

    printf("mes:");
    printf("\tmes: ");
    scanf("%d",&data.mes);

    printf("ano:");
    printf("\tano: ");
    scanf("%d",&data.ano);

 
return 0;
}
int diaDoAno( const Data *data ){

    int diasPorMes[12] = {31, 28, 31, 20, 31, 30, 31, 31, 30, 31, 30, 31};
    int diaAno = 0;

    if(ehBissexto(data->ano) == true){
        diasPorMes[1] = 29;
    }

    for(int i = 0; i < (data->mes)-1; i++){
        diaAno += diasPorMes[i];
    }

    diaAno += data->dia;
    return diaAno;

}

bool ehBissexto (int ano){

    if ( ano % 4 == 0) {
        return true;
    } else {
        return false;
    }

}
