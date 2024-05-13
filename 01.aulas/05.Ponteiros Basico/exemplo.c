#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 4;
    int *ptr;

    printf("Tamanho int: %ld   tamanho ptr: %ld\n",sizeof(a),sizeof(ptr));
    printf("A variavel a=%d e está na posição de memória %p\n", a, &a);
    printf("A variavel ptr=%p e está na posição de memória %p\n", ptr, &ptr);

    // dizer que ptr aponta para a
    ptr=&a;
    printf("A variavel ptr=%p e está na posição de memória %p\n", ptr, &ptr);

    //Posso aceder a "a" de forma direta ou indireta
    a=7;
    *ptr=8;
    printf("A variavel a=%d e está na posição de memória %p\n", a, &a);

    /*puts("-----");
    printf("A variavel ptr=%p e está na posição de memória %p\n", ptr, &ptr);
    printf("A variavel ptr=%p e está na posição de memória %p\n", ptr + 1, &ptr);
    printf("A variavel ptr=%p e está na posição de memória %p\n", ptr + 2, &ptr);

*/

    return EXIT_SUCCESS;
}