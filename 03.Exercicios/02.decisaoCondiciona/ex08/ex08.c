#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int idade;

    // Solicitar idade
    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    // Classificar e imprimir a categoria respetiva
    if (idade < 12)
    {
        printf("Categoria: Criança\n");
    }
    else if (idade >= 12 && idade <= 18)
    {
        printf("Categoria: Adolescente\n");
    }
    else
    {
        printf("Categoria: Adulto\n");
    }

    return EXIT_SUCCESS;
}