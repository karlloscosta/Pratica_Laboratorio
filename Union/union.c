#include <stdio.h>

typedef union indice{
    float ig;
    float ira;
    float irt;

}IA;

typedef struct dadosaluno {
    char nome[20];
    int mat;
    char curso[15];
    IA indice;
}Dados;

int main(void){
    
    Dados dados;
    IA ia;

    int op;

    printf ("informe o seu nome:\n");
    scanf (" %[^\n]", dados.nome );

    printf ("informe a sua matricula:\n");
    scanf ("%d", &dados.mat);

    printf ("informe o seu curso:\n");
    scanf (" %[^\n]", dados.curso);

    printf ("informe o seu indice:\n");

    printf ("Digite\t0 para informar o IG\nDigite\t1 para informar o IRA\nDigite\t2 para inforamr o IRT\n");
    scanf ("%d", &op);

    switch (op)
    {
        case 0:
            printf ("informe o seu IG:\n");
            scanf("%f", &dados.indice.ig); break;
        
        case 1:
            printf ("informe o seu IRA:\n");
            scanf("%f", &dados.indice.ira); break;

        case 2:
            printf ("informe o seu IRA:\n");
            scanf("%f", &dados.indice.irt); break;
    }
    
    return 0;
}