#include <stdio.h>
#include <stdlib.h>

typedef struct _professor{
    char nome [30];
    char disciplinas[5000];
    int regime;
}Professor;


Professor *cadastra(void){
    
    Professor *professor = (Professor*) malloc(2*sizeof(Professor)); 

    int indice;
    for(indice=0; indice<2; indice++){
    puts("informe o nome do professor");
    scanf(" %[^\n]", professor[indice].nome);
    puts("informe todas as disciplinas do professor(use - ou espaco para separar e use enter para confirmar");
    scanf(" %[^\n]", professor[indice].disciplinas);
    puts("informe o regime do professor");
    scanf("%d", &professor[indice].regime);
    
    }
    return professor;
    }

void imprime (Professor *professor){

    int indice;
    for(indice=0; indice<2; indice++){

    printf("Nome: %s\n", professor[indice].nome);
    printf("Disciplinas: %s\n", professor[indice].disciplinas);
    printf("O regime do professor(a) %s e de %d\n", professor[indice].nome, professor[indice].regime);
    puts("****************************");
    
}}

void muda_regime(Professor *professor){
    
    int indice;
    int op;

    puts("deseja alterar o regime de algum professor?");
    puts("1 - SIM\n 2 - NAO");
    scanf("%d", &op);
    if(op==1){
        puts(" de qual professor deseja alterar o regime?");
        scanf("%d", &indice);
        puts("qual o novo regime?");
        scanf("%d", &professor[indice-1].regime);
    }else if(op==2){
        printf("O regime nao foi alterado");
    }
}

int main(void){

Professor *professor = cadastra();
muda_regime(professor);
imprime(professor);

free(professor);

return 0;
}