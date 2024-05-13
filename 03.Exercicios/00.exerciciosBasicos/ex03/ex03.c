/**
* Author: Vitor Custódio
* Date: 21Dec2021
* Description: Exercício 3
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i;
    float f;
    double d;
    char c;

    /*
    Reparar que o atributo "%li" é utilizado pois a saída
    da função sizeof() é um long (li=long integer)
    */
    puts("Espaço em memória ocupado por cada uma das variáveis:");
    printf("Inteiro->%li\n",sizeof(i));
    printf("float->%li\n",sizeof(f));
    printf("double->%li\n",sizeof(d));
    printf("Caracter->%li\n",sizeof(c));


    return EXIT_SUCCESS;
}