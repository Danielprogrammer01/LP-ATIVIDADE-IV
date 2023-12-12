#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeDeContatos 2

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\t1ª Questão");
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
    char telefone[999];
    char email[999];
};

char* buscarContato(struct dados_pessoais contatos[], char *nome)
{
    
    int i;
    char* resposta[999];

    for (i = 0; i < quantidadeDeContatos; i++)
    {
        if (strcmp(contatos[i].nome, nome) == 0)
        {
            strcpy(resposta, contatos[i].telefone);
            break;
        }
        else
        {
            strcpy(resposta, "Contato não encontrado!");
        }
    }
        
    return resposta;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    char nome[999];
    struct dados_pessoais contatos[quantidadeDeContatos];

    cabecalho();

    for (i = 0; i < quantidadeDeContatos; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome do %dº contato: ", i + 1);
        gets(contatos[i].nome);

        fflush(stdin);

        printf("\nDigite o email: ");
        gets(contatos[i].email);
        
        fflush(stdin);

        printf("\nDigite o número telefônico: ");
        gets(contatos[i].telefone);

        limpaTela();
    }

    limpaTela();

    printf("\nContatos Cadastrados: \n");
    for (i = 0; i < quantidadeDeContatos; i++)
    {
        printf("\n%d - %s", i + 1, contatos[i].nome);
    }

    espaco();

    fflush(stdin);

    printf("\nDigite o nome do contato para a busca do número telefônico: ");
    gets(nome);

    fflush(stdin);

    printf("\n%s - %s\n", nome, buscarContato(contatos, nome));

    return 0;
}