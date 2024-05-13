#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main(int argc, char const *argv[])
{
    Lista *lista_a = new_lista(100);

    insert_no(lista_a, 5);
    insert_no(lista_a, 3);
    insert_no(lista_a, 2);
    insert_no(lista_a, 2);
    insert_no(lista_a, 8);
    print_lista(lista_a);
    print_no(lista_a, 3);
    print_no(lista_a, 13);
    remove_no(lista_a, 3);
    print_lista(lista_a);
    remove_no(lista_a, 8);
    remove_no(lista_a, 5);
    remove_no(lista_a, 2);
    free_lista(lista_a);

    return EXIT_SUCCESS;
}