#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int arr[] é igual a int *arr
int somaArray(int *arr, int dim)
{
    int soma = 0;
    for (int i = 0; i < dim; i++)
    {
        soma += arr[i];
    }
    return soma;
}

void alteraValor(int *arr, int indice, int novo_valor)
{
    arr[indice] = novo_valor;
}

void preencheArray(int *arr, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("Insira arr[%d]->", i);
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("Arr[%d]=%d\n", i, arr[i]);
    }
}

void print_array_inverso(int *arr, int dim)
{
   
    for (int i = dim -1; i >= 0; i--)
    {
        printf("Arr[%d]=%d\n", i, arr[i]);
    }
}

void altera_dois_valores(int *i1, int *i2){
    int tmp;
    tmp=*i1;
    *i1=*i2;
    *i2=tmp;
}


int main(int argc, char const *argv[])
{
    printf("Insira a dimensão do array");
    int dim;
    scanf("%d",&dim);
    int arr[dim];
    preencheArray(arr, dim);
    printf("A soma é %d\n", somaArray(arr, dim));
    alteraValor(arr, 2, 37);
    print_array(arr, dim);
    altera_dois_valores(&arr[1],&arr[3]);
    print_array_inverso(arr,dim);
    return EXIT_SUCCESS;
}