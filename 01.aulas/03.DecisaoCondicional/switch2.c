#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* pedir um caracter e ver se é consoante ou vogal */
    char c;
    printf("%c=%d\n",c,c);
    printf("Insira um caracter ->");
    scanf("%c", &c);
    

    switch (c)
    {
    case 97:
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        puts("É vogal");
        break;
    default:
        puts("É consoante");
        break;
    }
    printf("%c\n",c+1);
    return EXIT_SUCCESS;

}