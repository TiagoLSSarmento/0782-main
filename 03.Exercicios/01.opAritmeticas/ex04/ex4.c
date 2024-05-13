/**
* Author: Vitor Custódio
* Date: 04Jan2022
* Description: descrição
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int totaldias, anos, semanas, dias, minutos;
    printf("Insira número de dias->");
    scanf("%d", &totaldias);
    anos = totaldias / 365;
    semanas = (totaldias % 365) / 7;
    dias = (totaldias % 365) % 7;
    minutos = totaldias * 24 * 60;

    printf("Anos:%d\nSemanas:%d\nDias:%d\nTotal de minutos em %d dias é: %d\n", anos, semanas, dias, totaldias, minutos);

    return EXIT_SUCCESS;
}