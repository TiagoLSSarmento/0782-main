#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    char frase[100] = "vitor";
    char frase2[] = "vitor\n\0 rtyyuuu"; // O caracter \0
    puts(frase);
    printf("#%s#\n", frase2);
    printf("%c\n", frase2[13]);
    printf("strlen: %lu\n", strlen(frase2));
    printf("size: %lu\n", sizeof(frase2));

    // Então como podemos zerar um string?
    memset(frase2, '\0', 16); // Estou a encher a string \0

    char abc[5];
    // abc="abc"; No C não pode ser feito
    strcpy(abc, "abc");
    puts(abc);

    abc[2] = 'z';
    puts(abc);
    printf("O carater %c tem o codigo ascii %d\n", 'a', abc[0]);

    // ciclo para transformar uma string em maiusculas
    for (int i = 0; i < 5; i++)
    {
        if (abc[i] >= 'a' && abc[i] <= 'z')
            abc[i] -= 32;
    }

    puts(abc);

    return EXIT_SUCCESS;
}