#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int numero, seq = 1, dim_linha = 1, pos_linha = 1;
    printf("Insira número inteiro (>0)-> ");
    scanf("%d", &numero);

    // Validar se número é maior que 0
    if (numero <= 0)
    {
        puts("Erro! Número menor que 1. A sair....");
        exit(EXIT_FAILURE);
    }

    // Validar que número é válido
    int flag = 0;
    int incremento = 1;
    for (int i = 1; i <= numero; i += incremento)
    {
        if (i == numero)
            flag = 1;
        incremento++;
    }
    if (flag == 0)
    {
        puts("Erro! Número não válido");
        exit(EXIT_FAILURE);
    }

    while (seq <= numero)
    {
        printf("%-4d", seq);
        if (pos_linha == dim_linha)
        {
            puts("");
            pos_linha = 1;
            dim_linha++;
        }
        else
            pos_linha++;

        seq++;
    }

    return EXIT_SUCCESS;
}