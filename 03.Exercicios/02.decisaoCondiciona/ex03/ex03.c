#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int ano;
    printf("Insira um ano->");
    scanf("%d", &ano);
    if (1978 % 400 == 0)
    {
        printf("%d é Bissexto", ano);
        return EXIT_SUCCESS;
    }
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("%d é Bissexto", ano);
        return EXIT_SUCCESS;
    }
    printf("%d não é Bissexto", ano);
    return EXIT_SUCCESS;
}
