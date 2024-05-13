#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"
#include "oficina.h"

#define TRUE 1
#define FALSE 0
#define FULL -1
#define NOT_FOUND -1

//!--- Funções internas

int existe_veiculo(Oficina *of, char *matricula)
{

    for (int i = 0; i < NUM_CARROS; i++)
    {
        if (of->garagem[i] != NULL)
        {
            // Existe carro nesta posição
            if (strcmp(matricula, of->garagem[i]->matricula) == 0)
                return TRUE;
        }
    }
    return FALSE;
}

int get_indice_viatura(Oficina *of, char *matricula)
{
    for (int i = 0; i < NUM_CARROS; i++)
    {
        if (of->garagem[i] == NULL)
            continue;
        if (strcmp(matricula, of->garagem[i]->matricula) == 0)
            return i;
    }
    return NOT_FOUND;
}

int get_first_free_slot_garagem(Oficina *of)
{
    for (int i = 0; i < NUM_CARROS; i++)
    {
        if (of->garagem[i] == NULL)
            return i;
    }

    return FULL;
}

void ordenarVeiculos(Veiculo **garagem)
{
    int min;
    Veiculo *aux;
    for (int i = 0; i < NUM_CARROS - 1; i++)
    {
        min = i;
        if (garagem[i] == NULL)
            continue;

        for (int j = i + 1; j < NUM_CARROS; j++)
        {
            if (garagem[j] == NULL)
                continue;
            if (strcmp(garagem[j]->matricula, garagem[min]->matricula) < 0)
                min = j;
        }
        // trocar se existe uma matricula menor alfabeticamente
        if (min != i)
        {//Swap
            aux = garagem[i];
            garagem[i] = garagem[min];
            garagem[min] = aux;
        }
    }
}

//!-- Funções publicas

Oficina *new_oficina(char *nome)
{
    // Criar a memoria
    Oficina *of = malloc(sizeof(Oficina));
    of->garagem = malloc(sizeof(Veiculo *) * NUM_CARROS);

    // Inicializar
    strncpy(of->nome, nome, NAME_LENGHT);
    of->num_carros = 0;
    of->num_manut = 0;
    of->next_manut_id = 1;

    // Inicializar os ponteiros para veiculos
    for (int i = 0; i < NUM_CARROS; i++)
    {
        of->garagem[i] = NULL;
    }

    // devolver o ponteiro
    return of;
}

void free_oficina(Oficina *of)
{
    for (int i = 0; i < NUM_CARROS; i++)
    {
        if (of->garagem[i] != NULL){
            //Vou limpar as manutenções
            Veiculo *v=of->garagem[i];
            for (int j = 0; j < NUM_MANUT; j++)
            {
                if(v->manutencoes[j])// equivalente a != NULL
                {
                    free(v->manutencoes[j]);
                }
            }
            free(v->manutencoes);
            free(v); // Limpar memoria do veiculo
        }
    }

    free(of->garagem);
    free(of);
}

void info_oficina(Oficina *of)
{
    PRINT_INFO(of->nome, of->num_carros, of->num_manut);
}

void inserir_viatura(Oficina *of)
{
    char matricula[MATRICULA];
    Veiculo *v = NULL;

    if (of->num_carros == NUM_CARROS)
    {
        ERROR_OFICINA_CHEIA;
        return;
    }

    pedirString(ASK_MATRICULA, matricula, MATRICULA);

    // Ver se a viatura já está registada. Se estiver dar erro e sair
    if (existe_veiculo(of, matricula) == TRUE)
    {
        ERROR_MATRICULA_EXISTE(matricula);
        return;
    }
    // Se cheguei aqui posso inserir
    //  criar o espaço em memoria de viatura
    v = malloc(sizeof(Veiculo));

    // Solicitar os dados ao user (matricula, marca, modelo e ano)
    strcpy(v->matricula, matricula);
    pedirString(ASK_MARCA, v->marca, MARCA);
    pedirString(ASK_MODELO, v->modelo, MODELO);
    v->ano = pedirInteiro(ASK_ANO);
    //Inicializar manutenções
    v->num_manut=0;
    v->manutencoes=malloc(sizeof(Manutencao *)*NUM_MANUT);
    //Inicializar cada ponteiro para manutenção
    for (int i = 0; i < NUM_MANUT; i++)
    {
        v->manutencoes[i]=NULL;
    }
    
    // Colocar a viatura na garagem
    int indice = get_first_free_slot_garagem(of);
    of->garagem[indice] = v;

    // Atualizar dados da oficina
    of->num_carros++;

    ordenarVeiculos(of->garagem);
}

void imprime_viaturas(Oficina *of)
{
    // Percorre a garagem e dar a info da viatura

    PRINT_VIATURAS_HEADER(of->num_carros);
    for (int i = 0; i < NUM_CARROS; i++)
    {
        if (of->garagem[i] != NULL) // Caso o ponteiro seja nulo reeinicia o ciclo
            PRINT_VIATURAS_ITEM(of->garagem[i]->matricula);
    }
}

void mostra_viatura(Oficina *of)
{
    char matricula[MATRICULA];
    pedirString(ASK_MATRICULA, matricula, MATRICULA);
    int pos = get_indice_viatura(of, matricula);
    if (pos == NOT_FOUND)
    {
        ERROR_VIATURA_NAO_EXISTE(matricula);
        return;
    }
    // Se cheguei aqui então vou apresentar a informação da viatura
    PRINT_INFO_VIATURA(of->garagem[pos]->matricula, of->garagem[pos]->marca, of->garagem[pos]->modelo, of->garagem[pos]->ano);
}

void apagar_viatura(Oficina *of)
{
    char matricula[MATRICULA];
    pedirString(ASK_MATRICULA, matricula, MATRICULA);
    int pos = get_indice_viatura(of, matricula);
    if (pos == NOT_FOUND)
    {
        ERROR_VIATURA_NAO_EXISTE(matricula);
        return;
    }
    // Se cheguei aqui existe a viatura e tenho o indice

    //! Vou ter que fazer o mesmo, ou seja apagar as manutenções e depois a variavel manutenções
    free(of->garagem[pos]);

    of->garagem[pos] = NULL;
    of->num_carros--;
}

