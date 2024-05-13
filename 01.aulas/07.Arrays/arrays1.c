#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    int arr[4];
    int arr2[6] = {1, 24, 3, 4, 5, 6};

    arr[0] = 5;
    arr[1] = 3;
    printf("%d\n", arr[1]);

    for (int i = 0; i < 6; i++)
    {
        printf("Arr[%d]=%d\n", i, arr2[i]);
    }

    //Ler do teclado e inserir no array
    for (int i = 0; i < 4; i++)
    {
        printf("Insira arr[%d]->", i);
        scanf("%d", &arr[i]);
    }
    puts("Escrever valores");
    //Ler do array para o stdout
    for (int i = 0; i < 4; i++)
    {
        printf("Arr[%d]=%d\n", i, arr[i]);
    }

    puts("-----");


    return EXIT_SUCCESS;
}