#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    while (a < 10)
    {
        // Imprimir todos os número menos o 7
        if (a == 7)
        {
            a++;
            continue;
        }
        printf("%d\n", a);
        a++;
    }
    puts("---Numero pares--");
    for (int i = 1; i < 10; i++)
    {
        // Imprimir todos os número menos o 7
        if (i % 2 == 1)
            continue;

        printf("%d\n", i);
    }

    return EXIT_SUCCESS;
}