#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* Programa para converter inteiro em dia da semana*/

    int dia;
    printf("Insira dia da semana (1-7)->");
    scanf("%d", &dia);

    // testar se número é válido

    /*if (dia < 1 || dia > 7)
     {
         puts("Erro no número inserido");
         return EXIT_FAILURE;
     }*/

     

    switch (dia)
    {
    case 1:
        puts("Domingo");
        break;
    case 2:
        puts("Segunda-Feira");
        break;
    case 3:
        puts("terça-Feira");
        break;
    case 4:
        puts("quart-Feira");
        break;
    case 5:
        puts("quinta-Feira");
        break;
    case 6:
        puts("sexta-Feira");
        break;
    case 7:
        puts("Sábado");
        break;
    default:
        puts("Erro no número inserido");
        break;
    }

    // Escrever o dia caso seja válido

    return EXIT_SUCCESS;
}