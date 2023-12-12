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
    printf("\t\t5ª Questão");
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

       printf ("Código | Descrição\n");
       printf ("(1) - Adicionar informação\n");
       printf ("(2) - Sair e eixbir\n\n");
       printf ("Selecione a opção desejada: ");
       scanf ("%d", &opcao);

        switch (opcao) {
            case 1:
                limpaTela();

                printf ("Digite o nome do %dº funcionário: ", i+1);
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
    
    printf ("Média salarial dos programadores: R$%.2f\n", media_Salarial(funcionario));
                
    return 0;
}