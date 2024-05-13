#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"
#include "menu.h"

int menu_principal()
{
    // Print do menu
    // pedir opção ao user
    // validar a opção do user
    // retornar o que foi escolhido pelo user
    int opt;
    printf("################################\n"
           "##########  MENU  ##############\n"
           "(1) Mostra Info Oficina\n"
           "(2) Menu Viaturas\n"
           "(3) Menu Manutenções\n"
           "---------------\n"
           "(9) Sair da aplicação\n"
           "###############################\n");
    do
    {
        opt = pedirInteiro("Insira a sua opção");
    } while (!(opt == 9 || opt == 1 || opt == 2 || opt == 3));
    return opt;
}

int menu_viaturas()
{
    int opt;
    printf("################################\n"
           "#######  MENU VIATURAS  ########\n"
           "(1) Inserir Viatura\n"
           "(2) Listar Viaturas\n"
           "(3) Mostrar Viatura\n"
           "(4) Editar Viatura\n"
           "(5) Apagar Viatura\n"
           "---------------\n"
           "(9) Voltar ao menu Principal\n"
           "###############################\n");
    do
    {
        opt = pedirInteiro("Insira a sua opção");
    } while (!(opt == 9 || (opt >= 1 && opt <= 5)));
    return opt;
}

int menu_manutencao(){
    //1- inserir
    //2- Listar manutencoes
    //3-Editar Manutencao
    //9- sair
        int opt;
    printf("################################\n"
           "######  MENU MANUTENÇÕES  ######\n"
           "(1) Inserir Manutenção\n"
           "(2) Listar Manutenções\n"
           "(3) Editar Viatura\n"
           "---------------\n"
           "(9) Voltar ao menu Principal\n"
           "###############################\n");
    do
    {
        opt = pedirInteiro("Insira a sua opção");
    } while (!(opt == 9 || (opt >= 1 && opt <= 3)));
    return opt;
}