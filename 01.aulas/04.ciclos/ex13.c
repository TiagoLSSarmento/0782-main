#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSO 0
#define VERDADEIRO 1

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Insira dois positivos inteiros, maiores que zero, ordenados: ");
    scanf("%d %d",&a,&b);
    int soma_primos=0;//contador sempre iniciado a zero
    for (int num = a; num <= b; num++)
    {
        //ver se num é primo
        if(num < 2)
            continue;
        if(num == 2){
            soma_primos += num;
            continue;
        }
        if(num%2==0)
            continue;

        int primo = VERDADEIRO;
        for (int i = 3; i < num/2 +1; i+=2)
        {
            if(num % i == 0){
                primo=FALSO;
                break;
            }
        }
        //quando chegar aqui
        if(primo==VERDADEIRO)
            soma_primos+=num;
    }
    //Quando chegar aqui tenho as somas dos primos
    printf("A soma dos primos é: %d\n",soma_primos);
    return EXIT_SUCCESS;
}