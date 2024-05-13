#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char opcao;
    float base, altura, raio, area;

    // Menu
    puts("Que área pretende calcular?");
    puts("Círculo (c)");
    puts("Triângulo (t)");
    puts("Retângulo (r)");
    printf("Insira a sua opção-> ");
    scanf(" %c", &opcao);

    // Estrutura de decisão para calcular a área com base na figura escolhida
    switch (opcao)
    {
    case 'c':
        printf("Insira o raio do círculo-> ");
        scanf("%f", &raio);
        area = 3.14159 * raio * raio;
        printf("Área do Círculo: %.2f\n", area);
        break;
    case 't':
        printf("Insira a base do triângulo-> ");
        scanf("%f", &base);
        printf("Insira a altura do triângulo-> ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("Área do Triângulo: %.2f\n", area);
        break;
    case 'r':
        printf("Insira a base do retângulo-> ");
        scanf("%f", &base);
        printf("Insira a altura do retângulo-> ");
        scanf("%f", &altura);
        area = base * altura;
        printf("Área do Retângulo: %.2f\n", area);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return EXIT_SUCCESS;
}