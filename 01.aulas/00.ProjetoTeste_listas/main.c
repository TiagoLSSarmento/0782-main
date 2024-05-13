#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"
#include "menu.h"
#include "oficina.h"


void processa_menu_viaturas(Oficina *of)
{
    int opt;
    system("clear");
    do
    {
        opt = menu_viaturas();
        switch (opt)
        {
        case 1:
            system("clear");
            puts("Inserir Viaturas");
            //Podia pedir aqui os dados. Marca, modelo, etc
            inserir_viatura(of);
            break;
        case 2:
            system("clear");
            puts("Listar Viaturas");
            listar_viaturas(of);
            break;
        case 3:
            system("clear");
            puts("Mostra Viatura");
            break;
        case 4:
            system("clear");
            puts("Editar Viatura");
            break;
        case 5:
            system("clear");
            puts("Apagar Viatura");
            break;
        }
    } while (opt != 9);
}

void processa_menu_manutencoes(Oficina *of){

    int opt;
    system("clear");
    do
    {
        opt = menu_manutencao();
        switch (opt)
        {
        case 1:
            system("clear");
            puts("Inserir Manutenção");
            break;
        case 2:
            system("clear");
            puts("Listar Manutenções");
            break;
        case 3:
            system("clear");
            puts("Editar Manutenção");
            break;
        }
    } while (opt != 9);
}

int main(int argc, char const *argv[])
{
    // Declaração das Variaveis
    int opt;
    Oficina *of=new_oficina("TPSI 1223");

    system("clear");
    do
    {
        opt = menu_principal();
        switch (opt)
        {
        case 1:
            system("clear");
            puts("Info Oficinas");
            break;
        case 2:
            system("clear");
            processa_menu_viaturas(of);
            system("clear");
            break;
        case 3:
            system("clear");
            processa_menu_manutencoes(of);
            system("clear");
            break;
        }
    } while (opt != 9);
    free_oficina(of);
    return EXIT_SUCCESS;
}

