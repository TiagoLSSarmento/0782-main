#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void selection_sort(int *array, int n)
{
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if(array[j] < array[min]) //strcmp(str1,str2) < 0
                min=j;
        }
        //Se cheguei aqui o valor mais pequeno (ainda por processar) esta no indice min
        if(min != i){
            //Caso o minimo não esteja na posição
            swap(&array[i],&array[min]);
        }
    }
}

void imprimir_array(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main(int argc, char const *argv[])
{
    int array[5] = {2, 6, 1, 7, 9};
    puts("Array não ordenado");
    imprimir_array(array, 5);
    selection_sort(array, 5);
    puts("Array ordenado");
    imprimir_array(array, 5);
    return EXIT_SUCCESS;
}