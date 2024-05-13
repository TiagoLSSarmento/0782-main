/**
* Author: Vitor Custódio
* Date: 04Jan2022
* Description: descrição
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Insira um Inteiro->");
    scanf("%d", &n);
    printf("%d %% 2=%d\n", n, n % 2);
    return EXIT_SUCCESS;
}