#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int opt = 0;
    system("clear");
    do
    {
        puts("1 - Faz A");
        puts("2 - Faz B");
        puts("9 - sair");
        printf("Insira a sua opção ->");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            system("clear");
            puts("Faz A");
            break;
        case 2:
            system("clear");
            puts("Faz B");
            break;
        case 9:
            system("clear");
            break;
        default:
            system("clear");
            puts("Opção não válida");
        }
    } while (opt != 9);
    puts("Adeus");
    return EXIT_SUCCESS;
}