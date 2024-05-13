#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    double principal;
    double juro;
    int anos;
    printf("Insira o principal, a taxa de juro e o número de anos: ");
    scanf("%lf %lf %d",&principal,&juro,&anos);
    printf("Montante final: %.2lf\n",principal*pow(1+juro/100,anos));

    return EXIT_SUCCESS;
}