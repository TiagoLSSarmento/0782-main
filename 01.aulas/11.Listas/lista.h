#ifndef LISTA_H
#define LISTA_H

//Implementação de lista duplamente encadeada 
//ordenada de forma crescente

typedef struct _lista Lista;
typedef struct _no No;

typedef struct _no {
    //payload
    int id;
    //ponteiros de controlo
    No *next;
    No *prev;
} No;

typedef struct _lista {
    int num_nos;
    int dim; //!dimensão. Opcional
    //Ponteiros de controlo da lista
    No *first;
    No *last;
} Lista;


//Funções

Lista *new_lista(int dim);

void insert_no(Lista *l,int id);

void print_lista(Lista *l);

void print_no(Lista *l,int id);

void remove_no(Lista *l, int id);

void free_lista(Lista *l);

#endif //LISTA_H

