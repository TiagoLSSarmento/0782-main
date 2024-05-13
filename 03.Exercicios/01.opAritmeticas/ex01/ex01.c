/**
* Author: Vitor Custódio
* Date: 21Dec2021
* Description: Ex01 - Área triangulo
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    double b,h;
    printf("Insira a base->");
    scanf("%lf",&b);
    
    printf("Insira a altura->");
    scanf("%lf",&h);

    printf("A área é:%lf\n",b*h/2);
    return EXIT_SUCCESS;
}