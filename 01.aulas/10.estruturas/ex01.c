#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct _viatura{
    int ano;
    char matricula[9];
    double celindrada;
    
}Viatura;

typedef struct _oficina{
    char nome[50];
    Viatura viaturas[200];
}Oficina;

int main(int argc, char const *argv[])
{
    Oficina o1;
    o1.viaturas[0].ano=2020;



    return EXIT_SUCCESS;
}