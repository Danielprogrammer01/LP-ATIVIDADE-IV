#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeDeNotas 2
#define quantidadeDeAlunos 2

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\t2ª Questão");
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

struct dados_pessoais
{
    char nome[999];
    char dataDeNascimento[3][999];
    float notas[quantidadeDeNotas];
    float media;
};

float calcularMedia(struct dados_pessoais aluno[])
{
    
    int i;
    int j;
    float somaNotas[quantidadeDeAlunos];
    float media[999];

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
       
        for (j = 0; j < quantidadeDeNotas; j++)
        {
            somaNotas[i] += aluno[i].notas[j];
        }
        
        aluno[i].media = somaNotas[i] / quantidadeDeNotas;  
    }
        
    return aluno->media;
}
char* verificarSituacaoDoAluno(struct dados_pessoais alunos[])
{
    char* situacao[999];
    int i;

    for (i = 0; i < quantidadeDeAlunos; i++)
    {

        if (alunos[i].media >= 7.0)
        {
            strcpy(situacao, "Aprovado!");
        }
        else
        {
            strcpy(situacao, "Reprovado!");
        }
    }    
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    char nome[999];
    float media[quantidadeDeAlunos];
    struct dados_pessoais alunos[quantidadeDeAlunos];

    cabecalho();

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome do %dº aluno: ", i + 1);
        gets(alunos[i].nome);

        fflush(stdin);

        printf("\nDigite a data de nascimento:\n");
        
        printf("\nDigite a dia: ");
        gets(alunos[i].dataDeNascimento[0]);
        printf("\nDigite o mês: ");
        gets(alunos[i].dataDeNascimento[1]);
        printf("\nDigite o ano: ");
        gets(alunos[i].dataDeNascimento[2]);

            for (j = 0; j < quantidadeDeNotas; j++)
            {
            printf("\nDigite a %dª nota: ", j+1);
            scanf("%f",&alunos[i].notas[j]);
            }
        
        fflush(stdin);

        limpaTela();
    }

    limpaTela();

    calcularMedia(alunos);

    printf("\nAlunos: \n");
    for (i = 0; i < quantidadeDeAlunos; i++)
    {

        printf("\n%d - %s", i+1, alunos[i].nome);
        espaco();
        printf("\nData de Nascimento: %s/%s/%s", alunos[i].dataDeNascimento[0], alunos[i].dataDeNascimento[1], alunos[i].dataDeNascimento[2]);
        printf("\nMédia: %.1f", alunos[i].media);
        printf("\nSituação: %s", verificarSituacaoDoAluno(alunos));
        espaco();

    }

    espaco();

    return 0;
}
