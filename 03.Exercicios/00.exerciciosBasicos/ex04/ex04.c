/**
* Author: Vitor Custódio
* Date: 21Dec2021
* Description: Ex 04
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //declaração e atribuição de valores Às variáveis
    int a=8;
    int b=3;

    // "%i" indica que a função printf terá que receber um atributo inteiro
    printf("Soma: %i + %i = %i\n",a,b,a+b);
    printf("Produto: %i x %i = %i\n",a,b,a*b);
    printf("Divisão: %i / %i = %i\n",a,b,a/b);
    //Reparar que a divisão de dois inteiros dá sempre um inteiro
    //Também se pode calcular o resto da divisão (só com números inteiros)
    printf("Resto da divisão de inteiros: %i %% %i = %i\n",a,b, a%b);
    //Reparar que no printf colocamos "%%". Como esse caracter significa a identificação de um tipo de parâmetro, quer dizer que para imprimir o caracter temos que colocar em duplicado
    return EXIT_SUCCESS;
}