#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[100];
    printf("Insira o seu nome->");
    //scanf("%s",frase); - atenção que para a leitura no caracter espaço ' '
    fgets(frase,99,stdin);
    frase[strlen(frase)-1]='\0';
    puts(frase);
    return EXIT_SUCCESS;
}