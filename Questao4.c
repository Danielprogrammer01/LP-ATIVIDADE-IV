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
    printf("\t\t4ª Questão");
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

struct contaBancaria
{
    char numeroDaConta[999];
    char nomeDoTitular[999];
    char tipo[999];
    float saldo;
    float deposito;
    float saque;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int codigo;
    int contador;

    struct contaBancaria conta;

    cabecalho();

    do
    {
        printf("\n=====================\n");
        printf("\tMENU");
        printf("\n=====================\n");

        printf("Código | Descrição\n");
        printf("\n(1) - Atualizar Conta");
        printf("\n(2) - Depósito");
        printf("\n(3) - Saque");
        printf("\n(4) - Saldo");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            limpaTela();

            printf("\nDigite o nome do titular da conta: ");
            gets(conta.nomeDoTitular);

            printf("\nDigite o saldo da conta: ");
            scanf("%f", &conta.saldo);

            break;

        case 2:

            printf("\nDigite o valor a ser depositado: R$");
            scanf("%f", &conta.deposito);

            conta.saldo += conta.deposito;

            break;

        case 3:

            printf("\nDigite o valor a sacar: R$");
            scanf("%f", &conta.saque);

            conta.saldo = conta.saldo - conta.saque;

            break;

        case 4:

            break;

        default:
            printf("\nOpção inválida! Digite novamente.");
            printf("\n");
            break;
        }

        limpaTela();

    } while (codigo != 4);

    cabecalho();

    printf("\nTitular da conta: %s", conta.numeroDaConta);
    printf("\nSaldo: R$ %.2f", conta.saldo);

    return 0;
}