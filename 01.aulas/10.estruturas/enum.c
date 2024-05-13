#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    LIGEIRO,
    PESADO,
    MOTOCICLO,
    SUV,

} Tipo;

typedef struct _veiculo
{
    char matricula[9];
    Tipo tipo;
} Veiculo;

char *tipo_to_string(Tipo t)
{
    switch (t)
    {
    case LIGEIRO:
        return "Ligeiro";
    case PESADO:
        return "Pesado";
    default:
        return "";
    }
}

int main(int argc, char const *argv[])
{

    Veiculo v1;
    strcpy(v1.matricula, "AA-DD-33");
    v1.tipo = LIGEIRO;
    v1.tipo=1;

    printf("%s\n", tipo_to_string(v1.tipo));

    if(v1.tipo == LIGEIRO){

    }

    return EXIT_SUCCESS;
}