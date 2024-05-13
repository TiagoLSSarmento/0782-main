/**
* Author: Vitor Custódio
* Date: 21Dec2021
* Description: Ex05
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a=4;
    int b=7;
    int c=2;

    /**
     * Uma operação aritmética só com inteiros retorna um valor inteiro.
     * Desse modo necessitamos de dividir por 3.0, para indicar explicitamente que a saída é um real.
     * Abaixo está a experiência. Analise os resultados e verifique a diferença
     **/
    float media=(a+b+c)/3.0;
    float mediaInt=(a+b+c)/3;
    printf(" A média é: %f\n",media);
    printf(" A média utilizando só inteiros no cálculo é: %f\n",mediaInt);
    return EXIT_SUCCESS;
}