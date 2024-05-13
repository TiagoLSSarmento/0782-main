#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{

    int r;
    printf("Insira o raio da esfera:");
    scanf("%d",&r);
    printf("Volume: %.2lf\n",(1.0*4/3)*3.14159*pow(r,3.0));
    //pow é umma função da biblioteca math.h
    return EXIT_SUCCESS;
}