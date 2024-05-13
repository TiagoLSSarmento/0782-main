#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct _aluno Aluno;
//typedef struct _disciplina Disciplina;

typedef struct _disciplina{
    int cod;
    char nome[100];
    int livre;
}Disciplina;

typedef struct _aluno{
    int idade;
    char nome[100];
    Disciplina curriculo[20];
    //etc
}Aluno;

void altera_idade(Aluno *aluno, int idade){
    aluno->idade=idade;
}


int main(int argc, char const *argv[])
{
    Aluno *aluno=NULL;

    Aluno **turma=malloc(21 * sizeof(Aluno *));

    for (int i = 0; i < 21; i++)
    {
        turma[i]=NULL;
    }
    
    
    
    


    Aluno a2;
    altera_idade(&a2,34);
    aluno= malloc(sizeof(Aluno));
    aluno->idade=6;
    altera_idade(aluno,45);

    //(*aluno).idade=10; Equivalente ao anterior
    free(aluno);
}