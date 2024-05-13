#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Introduza o primeiro numero->");
    scanf("%d", &n1);
    printf("Introduza o segundo numero->");
    scanf("%d", &n2);
    if (n1 < n2)
        puts("O par está ordenado de forma crescente");
    else
        puts("O par está ordenado de forma decrescente ");
    return EXIT_SUCCESS;
}