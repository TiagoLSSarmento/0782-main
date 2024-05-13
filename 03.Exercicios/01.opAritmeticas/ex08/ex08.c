#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    double total;
    int pessoas;
    printf("Total da conta: ");
    scanf("%lf",&total);
    printf("Número de pessoas: ");
    scanf("%d",&pessoas);

    printf("Total por pessoa (com 10%% de taxa de serviço): %.2lf €\n",(total*1.1)/pessoas);

    return EXIT_SUCCESS;
}