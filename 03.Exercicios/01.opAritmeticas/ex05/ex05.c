/**
* Author: Vitor Custódio
* Date: 04Jan2022
* Description: equação primeiro grau
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a,b;
    puts("Programa para resolver equação de primeiro grau do tipo ax+b=0, sendo a e b inteiros");
    printf("Insira a e b separados por um espaço->");
    scanf("%d %d",&a,&b);//Podem ser lidas mais que uma variável na linha de entrada
    printf("x=%.3lf\n",-1.0*b/a);

    return EXIT_SUCCESS;
}