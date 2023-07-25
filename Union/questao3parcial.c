#include<stdio.h>
#include<stdlib.h>

typedef enum mes{
    JAN=1, FEV, MAR, ABR, JUN, JUL, AGO, SET, OUT, NOV, DEZ
}Mes;

typedef struct data{
    int dia;
    int mes;
    int ano;
}Data;

int main (void){

    Data data;

    Data *date = (Data*)malloc (sizeof(Data));
    if(date==NULL){
        puts("***Erro de Alocação***");
        exit(1);
    }
printf("informe o seu dia de nascimento");
scanf("%d", data->dia);

printf("informe o seu ano de nascimento");
scanf("%d", data->ano);
}
