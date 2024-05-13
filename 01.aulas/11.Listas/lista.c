#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

//! Funções privadas

/**
 * Procurar o no com o id.
 * Retorna ponteiro para o no se encontrar
 * Ou NULL se o id não existir na lista
 */
No *find_no_by_id(Lista *l, int id)
{
    No *aux = l->first;
    while (aux)
    {
        if (id == aux->id)
            return aux;
        aux = aux->next;
    }
    return NULL;
}

No *get_no_position(Lista *l, int id)
{
    No *aux = l->first;
    while (aux)
    {
        if (aux->id > id)
            return aux;
        aux = aux->next;
    }
    return NULL; // Inserir no fim
}

//! Públicas
Lista *new_lista(int dim)
{
    Lista *l = malloc(sizeof(Lista));
    l->num_nos = 0;
    l->dim = dim;
    l->first = NULL;
    l->last = NULL;
    return l;
}

void insert_no(Lista *l, int id)
{
    // procurar se o id já existe
    if (find_no_by_id(l, id))
    { // mesmo que != NULL
        // Se existir erro e sai
        puts("Erro! Id já existe");
        return;
    }

    //! testar se a lista cheia

    // Se não existir criar o no
    No *no = malloc(sizeof(No));
    no->id = id;
    l->num_nos++;
    // posicionar o no de forma crescente

    // Primeiro elemento a ser inserido na lista (vazia)
    if (l->first == NULL && l->last == NULL)
    {
        l->first = no;
        l->last = no;
        no->prev = NULL;
        no->next = NULL;
        return;
    }

    No *pos = get_no_position(l, id);

    // Ser o primeiro da lista mas não unico
    if (l->first == pos)
    {
        no->prev = NULL;
        no->next = pos;
        pos->prev = no;
        l->first = no;
        return;
    }

    // Ser o ultimo mas não unico
    if (pos == NULL)
    {
        l->last->next = no;
        no->prev = l->last;
        l->last = no; // Atenção à ordem. So posso mudar o last depois dos dois comandos antes.
        no->next = NULL;
        return;
    }

    // Caso geral. algures no meio
    no->next = pos;
    no->prev = pos->prev;
    no->prev->next = no;
    pos->prev = no;
}

void print_lista(Lista *l)
{
    No *aux = l->first;
    while (aux)
    {
        printf("%d\n", aux->id);
        aux = aux->next;
    }
}

void print_no(Lista *l, int id)
{
    No *aux = find_no_by_id(l, id);
    if (aux)
        printf("A imprimir no:%d\n", aux->id);
    else
        printf("Erro! O no id=%d não existe\n", id);
}

void remove_no(Lista *l, int id)
{
    No *aux = find_no_by_id(l, id);
    if (!aux)// aux==NULL
    { 
        puts("ERRO!. Nó não existe");
        return;
    }
    //Se cheguei aqui existe e vou remover
    l->num_nos --;

    //Unico na lista
    if(l->first==l->last){
        l->first=NULL;
        l->last=NULL;
        free(aux);
        return;
    }

    //Não unico mas primeiro
    if(aux==l->first){

        l->first=aux->next;
        l->first->prev=NULL;
        //aux->next->prev=NULL; Igual à anterior
        free(aux);
        return;
    }

    //Não unico mas ultimo
    if(aux==l->last){
        l->last=aux->prev;
        l->last->next=NULL;
        free(aux);
        return;
    }

    //Caso geral
    aux->prev->next=aux->next;
    aux->next->prev=aux->prev;
    free(aux);

}

void free_lista(Lista *l)
{
    No *tmp, *aux = l->first;
    while (aux)
    {
        tmp = aux->next;
        free(aux);
        aux = tmp;
    }
    free(l);
}