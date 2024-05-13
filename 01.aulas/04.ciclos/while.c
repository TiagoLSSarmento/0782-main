#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    while (a > 0)
    {
        printf("%d\n",a);
        a-=3;
    }

    while (1)
    {
        printf("%d\n",a);
        a --;
        if(a < -5)
            break;
    }
    
    puts("a sair");
    printf("%d\n",a);
    return EXIT_SUCCESS;
}