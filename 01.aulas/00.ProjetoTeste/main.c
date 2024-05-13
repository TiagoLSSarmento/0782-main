#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"
#include "menu.h"
#include "oficina.h"


void processa_menu_viaturas(Oficina *oficina)
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
            inserir_viatura(oficina);
            break;
        case 2:
            system("clear");
            imprime_viaturas(oficina);
            break;
        case 3:
            system("clear");
            mostra_viatura(oficina);
            break;
        case 4:
            system("clear");
            puts("Editar Viatura");//TODO alunos
            break;
        case 5:
            system("clear");
            apagar_viatura(oficina);
            break;
        }
    } while (opt != 9);
}

void processa_menu_manutencoes(Oficina *oficina){

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
    Oficina *oficina=new_oficina("Oficina dos TPSI 1223");

    system("clear");
    do
    {
        opt = menu_principal();
        switch (opt)
        {
        case 1:
            system("clear");
            info_oficina(oficina);
            break;
        case 2:
            system("clear");
            processa_menu_viaturas(oficina);
            system("clear");
            break;
        case 3:
            system("clear");
            processa_menu_manutencoes(oficina);
            system("clear");
            break;
        }
    } while (opt != 9);

    free_oficina(oficina);
    return EXIT_SUCCESS;
}

