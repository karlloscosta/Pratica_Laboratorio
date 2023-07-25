/*Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto*/

#include <stdio.h>
#include <string.h>

typedef union tipo{
    char produto[20];

}type;

typedef struct infos{
    char nome[20];
    float valor;
    type tipo;
}Infos;

int main(void){

    Infos info;
    type tipo;

    int registra;

    puts("***DADOS DO PRODUTO***");

    printf("informe o nome do produto...\n");
    scanf(" %[^\n]", info.nome);

    printf("informe o valor do produto...\n");
    scanf("%f", &info.valor);

    puts("Informe o tipo do seu produto");

    printf ("Digite\t0 para registrar um Alimento\nDigite\t1 para registrar uma Bebida\nDigite\t2 para registrar um Eletronico\n");
    scanf ("%d", &registra);

    switch (registra)
    {
        case 0:
            strcpy(info.tipo.produto,"Alimento"); break;
        
        case 1:
            strcpy(info.tipo.produto,"Bebida"); break;

        case 2:
            strcpy(info.tipo.produto,"Eletronico"); break; //strcpy (destino, "Palavra Atribuida")
    }
    
    printf("%s", info.tipo.produto );

    return 0;
}


