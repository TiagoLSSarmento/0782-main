# Ex 10
Complete o programa seguinte utilizando um bloco switch, por forma a criar uma simples calculadora

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num1,num2;
    float resultado; // guardar o resultado
    char ch;    //guardar qual a operação a executar
     
    printf("Insira o 1º num: ");
    scanf("%d",&num1);
    printf("Insira o 2º num: ");
    scanf("%d",&num2);
     
    printf("Escolha a operação matemática(+,-,*,/,%%): ");
    scanf(" %c",&ch);

    /* FIX ME*/

    return EXIT_SUCCESS;
}

```