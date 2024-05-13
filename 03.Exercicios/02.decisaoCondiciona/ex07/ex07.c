#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int mes;

    // Solicitar o número do mês
    printf("Insira o número do mês (1-12): ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("O mês (%d) tem 30 dias.\n",mes);
        break;
    case 2:
        printf("Fevereiro tem 28 dias.\n"); // Não bissexto
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mês (%d) tem 31 dias.\n",mes);
        break;
    default:
        printf("Número inválido!!!\n");
    }

    return EXIT_SUCCESS;
}