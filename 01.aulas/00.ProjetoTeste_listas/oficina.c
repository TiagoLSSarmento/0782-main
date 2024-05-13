#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui.h"
#include "oficina.h"

/**
 * Procura na lista de veiculos se existe um com a matricula dada.
 * Retorna ponteiro para o veiculo se existir
 * Retorna NULL se veiculo não existir
 */
Veiculo *get_viatura_by_matricula(LCarros *garagem, char *matricula)
{
    NoLC *aux = garagem->first;
    while (aux)
    {
        if (strcmp(matricula, aux->v->matricula) == 0)
            return aux->v;
        aux = aux->next;
    }
    return NULL;
}

NoLC *get_veiculo_position(LCarros *garagem, Veiculo *v)
{
    NoLC *aux = garagem->first;
    while (aux)
    {
        if (strcmp(aux->v->matricula, v->matricula) > 0)
            return aux;
        aux = aux->next;
    }
    return NULL;
}

void adiciona_veiculo_lista(LCarros *garagem, Veiculo *v)
{
    NoLC *no = malloc(sizeof(NoLC));
    no->v = v;

    // Inserir o nó na lista
    // Primeiro nó a ser inserido
    if (garagem->first == NULL)
    {
        garagem->first = no;
        garagem->last = no;
        no->next = NULL;
        no->prev = NULL;
        return;
    }
    NoLC *aux=get_veiculo_position(garagem,v);

    // Inserir no inicio da lista
    if(aux==garagem->first){
        no->prev=NULL;
        garagem->first->prev=no;
        no->next=garagem->first;
        garagem->first=no;
        return;
    }

    // Inserir no fim da lista
    if(aux==NULL){
        garagem->last->next=no;
        no->prev=garagem->last;
        no->next=NULL;
        garagem->last=no;
        return;
    }

    //Se cheguei aqui 
    // Caso geral. algures no meio.
    no->next=aux;
    no->prev=aux->prev;
    aux->prev->next=no;
    aux->prev=no;
    return;
}

Oficina *new_oficina(char *nome)
{
    // Criar a memoria
    Oficina *of = malloc(sizeof(Oficina));

    // Inicializar
    strncpy(of->nome, nome, NAME_LENGHT);
    of->num_carros = 0;
    of->num_manut = 0;
    of->next_viatura_id = 1;

    // Criar lista (garagem)
    of->garagem = malloc(sizeof(LCarros));
    of->garagem->first = NULL;
    of->garagem->last = NULL;
    // devolver o ponteiro
    return of;
}

void inserir_viatura(Oficina *of)
{
    char matricula[MATRICULA];

    Veiculo *v = NULL;
    // Solicitar dados ao user
    pedirString(ASK_MATRICULA, matricula, MATRICULA);
    // Validar dados (ver se viatura já existe)
    if (get_viatura_by_matricula(of->garagem, matricula))
    {
        // Se chegar aqui é porque existe
        //-> se já existe erro e sai
        puts("ERRO");
        return;
    }
    // Se cheguei aqui
    //->se não existe insere (criar)
    v = malloc(sizeof(Veiculo));
    strcpy(v->matricula, matricula);
    pedirString(ASK_MARCA, v->marca, MARCA);
    pedirString(ASK_MODELO, v->modelo, MODELO);
    v->ano = pedirInteiro(ASK_ANO);
    v->num_manut = 0;

    // Adicionar à lista (ordem alfabetica matricula)
    adiciona_veiculo_lista(of->garagem, v);
    of->num_carros ++;
}


void listar_viaturas(Oficina *of){
    NoLC *aux=of->garagem->first;
    while(aux){
        printf("%s\n",aux->v->matricula);
        aux=aux->next;
    }
}

void listar_viaturas_inversa(Oficina *of){
    NoLC *aux=of->garagem->last;
    while(aux){
        printf("%s\n",aux->v->matricula);
        aux=aux->prev;
    }
}


void free_oficina(Oficina *of)
{
    NoLC *aux1=of->garagem->first,*aux2;
    //Apagar Lista de Carros
    while (aux1)
    {
        aux2=aux1->next;
        free(aux1->v);
        free(aux1);
        aux1=aux2;
    }
    //Tenho todos os veiculo e nos limpos
    free(of->garagem);
    free(of);
    

}