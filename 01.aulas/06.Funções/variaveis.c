#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ABC 10

//Variavel global
int i=15;

void escreve_i(){
    printf("%d\n",i);
}

int main(int argc, char const *argv[])
{
    int i = ABC;
    printf("%d\n",i);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",i);
    }
    printf("%d\n",i);
    escreve_i();
    
    return EXIT_SUCCESS;
}