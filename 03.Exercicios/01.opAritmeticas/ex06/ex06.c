#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    double celsius;
    printf("Insira a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    printf("Temperatura em Fahrenheit: %.1lf\n", celsius * 9 / 5 + 32);

    return EXIT_SUCCESS;
}