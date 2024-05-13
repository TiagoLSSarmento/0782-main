#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Insira um caracter->");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("O carcater %c é uma vogal\n",c);
        exit(EXIT_SUCCESS);
    }
    //Se cheguei aqui é porque não é vogal
    printf("O carcater %c é uma consoante\n",c);

    return EXIT_SUCCESS;
}
