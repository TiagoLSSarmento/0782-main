#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    if (4 == 5 && 3 > 1)
    {
        //Se condição for verdadeira
        puts("verdadeiro");
    }
    else
    {
        //Se condição for false
        puts("falso");
    }

    //Dizer se um número é maior, igual ou menor a 5
    int a;
    printf("Insira um valor->");
    scanf("%d",&a);

    if (a==5)
    {
        puts("Valor é igual a 5");
    }
    else if (a>5)
    {
        puts("Valor é maior que 5");
    }
    else
    {
        puts("Valor é menor a 5");
    }
    

    return EXIT_SUCCESS;
}