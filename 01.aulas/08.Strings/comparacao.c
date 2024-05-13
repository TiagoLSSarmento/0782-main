#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int result = strcmp("ana", "anabela");

    if (result == 0)
    {
        puts("As strings são iguais");
    }
    else if (result > 0)
    {
        printf("String do primeiro argumento é maior (%d)",result);
    }
    else
    {
        printf("String do segundo argumento é maior (%d)",result);
    }

    return EXIT_SUCCESS;
}