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
    printf("\t\t3ª Questão");
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

struct compra {
    int quantidade;
    float preco;
    char nome[999];
}; 

int quantidadeProdutos (int quantia) {
    int quantidade_Estoque = 100;
    return quantidade_Estoque -= quantia;
}

float valor_Estoque (float dinheiro, float cifra) {
    float preco_Produto = 1200;
    return dinheiro * cifra;
}

int main ( ) {
    setlocale (LC_ALL, "");

    int i, opcao, acervo;
    float montante;
    struct compra aquisicao;

    do {
        printf("\n=====================\n");
        printf("\tMENU");
        printf("\n=====================\n");

        printf ("Código | Descrição\n");
        printf ("\n(1) - Realizar uma compra\n");
        printf ("(2) - Consultar estoque\n");
        printf ("(3) - Sair do programa\n\n");
        printf ("\nSelecione a opção desejada: ");
        scanf ("%d", &opcao);

        limpaTela();

        switch (opcao) {
        case 1:
            fflush (stdin);

            printf ("\nDigite o nome do produto: ");
            gets (aquisicao.nome);
            fflush (stdin);

            limpaTela();
    
            printf ("\nDigite a quantidade adquirida: ");
            scanf ("%d", &aquisicao.quantidade);
            fflush (stdin);

            limpaTela();
    
            printf ("\nDigite o valor do produto: ");
            scanf ("%f", &aquisicao.preco);

            acervo = quantidadeProdutos(aquisicao.quantidade);
            break;

            limpaTela();
        case 2:
 
            printf ("Nome do produto: %s\n", aquisicao.nome);
            printf ("Quantidade no estoque: %d\n", acervo);
            system ("pause");
            limpaTela();
            break;

        case 3:
        break;
        
        default:
            printf ("\nOpção Inválida! Por favor, selecione uma das opções disponíveis\n\n");
            break;
        }
    
    } while (opcao != 3);

    return 0;
            
}