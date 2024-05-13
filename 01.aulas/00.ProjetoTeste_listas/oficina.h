#ifndef OFICINA_H
#define OFICINA_H



#define NAME_LENGHT 100
#define MATRICULA 9
#define MARCA 30
#define MODELO 30

//!---- MACROS STRINGS SAIDA
#define PRINT_INFO(NOME,CARROS,MANUTS) printf("#### %s #####\nNumero Carros: %d\nNum Manutenções: %d\n",NOME,CARROS,MANUTS);
#define PRINT_VIATURAS_HEADER(NUM) printf("A Oficina possui %d carros\n",NUM)
#define PRINT_VIATURAS_ITEM(MATR) printf(" -> %s\n",MATR)
#define PRINT_INFO_VIATURA(MATR,MARCA,MODELO,ANO) printf("Matricula: %s\nMarca: %s\nModelo: %s\nAno: %d\n",MATR,MARCA,MODELO,ANO)
#define SUCESSO_VIATURA_APAGADA(MATR) printf("Viatura %s apagada com sucesso\n",MATR)


#define ASK_MATRICULA "Insira a matricula do veiculo"
#define ASK_MODELO "Insira o modelo"
#define ASK_MARCA "Insira a marca"
#define ASK_ANO "Insira o ano"
#define ERROR_MATRICULA_EXISTE(matricula) printf("Erro! Matricula %s já existe.\n",matricula)
#define ERROR_OFICINA_CHEIA puts("Erro! Oficina cheia")
#define ERROR_VIATURA_NAO_EXISTE(MATR) printf("Erro! Viatura %s não encontrada!\n",MATR)



typedef struct _veiculo Veiculo;
typedef struct _oficina Oficina;
//Falta a manutenção
typedef struct _lista_carros LCarros;
typedef struct _no_lista_carros NoLC;

typedef struct _lista_carros {
    NoLC *first;
    NoLC *last;
} LCarros;

typedef struct _no_lista_carros {
    Veiculo *v;
    //Controlo
    NoLC *next;
    NoLC *prev;
} NoLC;

typedef struct _veiculo{
    char matricula[MATRICULA];
    char marca[MARCA];
    char modelo[MODELO];
    int ano;
    int num_manut;//Numero de manutenções de um carro
    //Lista de movimentos

}Veiculo;

typedef struct _oficina{
    char nome[NAME_LENGHT];
    //Outras variáveis
    int num_carros;
    int num_manut; //numero de manutenções dos carros na oficina
    // gerir os ids das manutenções
    int next_viatura_id;
    
    // Para registar os carros (Lista de Carros)
    LCarros *garagem;
}Oficina;

Oficina *new_oficina(char* name);

void free_oficina(Oficina *of);

void listar_viaturas(Oficina *of);

void inserir_viatura(Oficina *of);

#endif