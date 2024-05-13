#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    pedir e ler valor valor
    testar valor (sair se não for correto)
    se for correto escrever o losangulo
        - Primeiro a parte de cima
        - Parte de baixo
    */
    int n;
    printf("Insira valor de n (> 3 && impar) ->");
    scanf("%d", &n);

    if (n < 3 || n % 2 == 0)
    {
        // Número não é válido
        puts("Erro! Número não válido");
        exit(EXIT_FAILURE);
    }
    // Se cheguei aqui escrever
    int esp = n / 2;
    int ast = 1;
    int linha = 1;
    while (linha <= n)
    {
        // Escreve
        for (int i = 0; i < esp; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < ast; i++)
        {
            printf("*");
        }
        printf("\n");

        // Atualizar valores das variaveis de controlo
        if (linha <= n / 2)
        {
            // Parte de cima
            esp--;
            ast += 2;
        }
        else
        {
            // Parte de baixo
            ast -= 2;
            esp++;
        }

        linha++;
    }

    return EXIT_SUCCESS;
}
/*
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
 */