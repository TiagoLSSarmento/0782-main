#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int n;
    printf("Insira inteiro->");
    scanf("%d",&n);
    if(n>0)
        printf("%d é positivo\n",n);
    else if(n==0)
        printf("número é 0\n");
    else
        printf("%d é negativo\n",n);

    return EXIT_SUCCESS;
}