#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int tentativas = 0, palpite;
    int numero;

    // Geração
    srand(time(NULL));
    numero = 1 + rand() % 100;

    do
    {
        printf("Insira palpite (1-100)-> ");
        scanf("%d",&palpite);

        if (palpite < 1 || palpite > 100)
        {
            puts("ERRO! Número fora do intervalo (1-100)");
            continue;
        }
        // Se cheguei aqui o plapite é válido
        tentativas ++;
        //Dar palpite
        if (palpite > numero)
            puts("Muito Grande");
        else if (palpite < numero)
            puts("Muito pequeno");
        

    } while (numero != palpite);

    //Se cheguei aqui acertou
    printf("Parabéns, acertou em %d tentativas\n",tentativas);
    return EXIT_SUCCESS;
}