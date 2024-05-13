#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // pedir numero de linhas (>= 1)
    // testar numero
    // escrever triangulo
    int linhas, elm_linha = 1, valor;
    printf("Insira número de linhas (>0)-> ");
    scanf("%d", &linhas);

    // Testar
    if (linhas < 1)
    {
        puts("Erro! Número de linhas inválido");
        return EXIT_FAILURE;
    }

    // escrever o triângulo
    for (int i = 0; i < linhas; i++)
    {
        // ciclo para escrever os espaços
        for (int j = 0; j < linhas - i; j++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                valor = 1;
            else
                valor = valor * (i - j + 1) / j;
            printf("%4d",valor);
        }

        puts("");
    }

    return EXIT_SUCCESS;
}