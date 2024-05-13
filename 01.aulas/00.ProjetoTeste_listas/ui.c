#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"

#define MAX_INPUT 1024

// Declaração de funções internas


// Implementação das funções privadas

//!-------------------------------------
//*IMPLENTAÇÃO funções publicas
//!-------------------------------------

int pedirInteiro(char *prompt)
{
    
    char buffer[MAX_INPUT];
    printf("%s-> ", prompt);
    memset(buffer, '\0', MAX_INPUT);
    fgets(buffer, MAX_INPUT - 1, stdin);
    return atoi(buffer);
}

double pedirDouble(char *prompt)
{
    char buffer[MAX_INPUT];
    printf("%s-> ", prompt);
    memset(buffer, '\0', MAX_INPUT);
    fgets(buffer, MAX_INPUT - 1, stdin);
    double valor = 0.0;
    sscanf(buffer, "%lf", &valor);
    return valor;
}

void pedirString(char *prompt, char *dest, int max)
{
    char buffer[MAX_INPUT];
    printf("%s-> ", prompt);
    memset(buffer, '\0', MAX_INPUT);
    fgets(buffer, MAX_INPUT - 1, stdin);
    buffer[strlen(buffer)-1]='\0';//Retira o \n do final da string
    memset(dest,'\0',max);
    strncpy(dest,buffer,max-1);
    return;
}