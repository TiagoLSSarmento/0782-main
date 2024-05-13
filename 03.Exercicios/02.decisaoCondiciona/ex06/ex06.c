#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Insira número inteiro->");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("%d é par\n", num);
        break;

    default:// Significa que se não é par, só pode ser impar
        printf("%d é impar\n", num);
        break;
    }

    return EXIT_SUCCESS;
}