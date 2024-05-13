#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINHAS 3
#define COLUNAS 2

int main(int argc, char const *argv[])
{
    int matriz [LINHAS][COLUNAS];

    for (int l = 0; l < LINHAS; l++)
    {
        for (int c = 0; c < COLUNAS; c++)
        {
            printf("Insira valor de mat[%d][%d]: ",l,c);
            scanf("%d",&matriz[l][c]);
        }
        
    }

     for (int l = 0; l < LINHAS; l++)
    {
        for (int c = 0; c < COLUNAS; c++)
        {
            printf("%3d",matriz[l][c]);
            
        }
        puts("");
    }
    

    return EXIT_SUCCESS;
}