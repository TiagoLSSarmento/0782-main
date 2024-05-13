#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int num;
    int temp;
    char opt;

    do
    {
        printf("Insira um inteiro: ");
        scanf("%d", &num);

        int fatorial = 1;
        for (int i = num; i > 0; i--)
        {
            fatorial *= i;
        }

        //Calculo do fatorial com outro tipo
        int fatorial2=1;
        temp=num;
        while (temp !=0)
        {
            fatorial2 *= temp;
            temp --;
        }
        

        printf("%d!=%d\n", num, fatorial);
        printf("%d!=%d\n", num, fatorial2);
        printf("Calcular fatorial ? (s/outra tecla): ");
        getchar(); //Para limpar o \n que ficou do comando scanf a cima
        scanf("%c", &opt);
    } while (opt == 's');

    return EXIT_SUCCESS;
}