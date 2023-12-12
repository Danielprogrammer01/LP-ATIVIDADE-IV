#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\t5� Quest�o");
    printf("\n===========================================\n");
}

void espaco()
{
    printf("\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

struct informacao {
    char nome[999];
    char cargo[999];
    float salario;
    float media;
};

float media_Salarial (struct informacao funcionario[]) {
    int i;
    int contador;
    float soma = 0;
    float media;

    for (i = 0; i < 999; i++) {

      soma += funcionario[i].salario;
      
      if (funcionario[i].salario > 0) {
        contador++; }

        funcionario[i].media = soma / contador;

    }
    
    return funcionario->media;
}

int main ( ) {
    setlocale (LC_ALL, "");

    int opcao;
    int i = 0;
    int j;
    int contador;
    float media;
    struct informacao funcionario[999];

    do {

        printf("\n=====================\n");
        printf("\tMENU");
        printf("\n=====================\n");

       printf ("C�digo | Descri��o\n");
       printf ("(1) - Adicionar informa��o\n");
       printf ("(2) - Sair e eixbir\n\n");
       printf ("Selecione a op��o desejada: ");
       scanf ("%d", &opcao);

        switch (opcao) {
            case 1:
                limpaTela();

                printf ("Digite o nome do %d� funcion�rio: ", i+1);
                gets (funcionario[i].nome);

                limpaTela();

                printf ("Digite o nome do cargo: ");
                gets (funcionario[i].cargo);

                limpaTela();

                printf ("Digite o valor do salario: R$");
                scanf ("%f", &funcionario[i].salario);
                i++;
                limpaTela();

                break;
        }
    } while (opcao != 2);

    limpaTela();
    
    printf ("M�dia salarial dos programadores: R$%.2f\n", media_Salarial(funcionario));
                
    return 0;
}