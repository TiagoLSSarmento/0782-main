#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("Insira um número entre 0 e 5-> ");
    scanf("%d", &numero);

    // switch para verificar o número e imprimir por extenso
    switch (numero) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Três\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        default:
            // Mensagem de erro se o número não estiver entre 0 e 5
            printf("Erro: número não válido\n");
    }

    return EXIT_SUCCESS;
}
