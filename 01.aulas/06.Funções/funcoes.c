#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assinatura (declaração)
int calcula_dobro(int n);
void calcula_triplo(int *b);

int main(int argc, char const *argv[])
{
    /* code */
    int a = 5;
    int b = 3;
    a = calcula_dobro(a);
    printf("A=%d\n", a);

    printf("B=%d\n", b);
    calcula_triplo(&b);
    printf("B=%d\n", b);

    return EXIT_SUCCESS;
}

// Implementação de funções
int calcula_dobro(int n)
{
    return n * 2;
}

// Triplica o valor se valor superior a 4
void calcula_triplo(int *b)
{
    *b = *b * 3;
    if (*b <= 4)
        return;
    return;
}