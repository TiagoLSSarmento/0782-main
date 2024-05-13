#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    double altura, base, area;


    printf("Insira base e altura separadas por espaço->");
    scanf("%lf %lf",&base,&altura);

    // pedir base
    /* printf("Insira a base-> ");
     scanf("%lf", &base);*/
    // pedir altura
    /*printf("Insira a altura-> ");
    scanf("%lf", &altura);*/
    // calcular
    area = base * altura / 2;
    // escrever o ecrã
    printf("A área do triangulo é:%010.2lf\n", area);

    printf("A área do triangulo é:%.3lf\n", base * altura / 2);

    

    return EXIT_SUCCESS;
}