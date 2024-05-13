#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",1 + rand() % 100);
    }
    
    return EXIT_SUCCESS;
}