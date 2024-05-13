#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    float resultado; // guardar o resultado
    char op;    //guardar qual a operação a executar
     
    printf("Insira o 1º num: ");
    scanf("%d", &num1);
    printf("Insira o 2º num: ");
    scanf("%d", &num2);
     
    printf("Escolha a operação matemática (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // verificar primeiro se o divisor é zero antes de dividir
            if (num2 != 0) {
                resultado = (float)num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return EXIT_FAILURE;
            }
            break;
        case '%':
            // O operador % só funciona com inteiros
            resultado = num1 % num2;
            break;
        default:
            printf("Operação inválida!\n");
            return EXIT_FAILURE;
    }

    printf("Resultado: %.2f\n", resultado);

    return EXIT_SUCCESS;
}
