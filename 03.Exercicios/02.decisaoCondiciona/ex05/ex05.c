
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a, b, c;
    printf("insira a->");
    scanf("%lf", &a);
    printf("insira b->");
    scanf("%lf", &b);
    printf("insira c->");
    scanf("%lf", &c);

    double raiz = b * b - 4 * a * c;

    if (a == 0)
    {
         printf("A não pode ser zero.\n");
        return 1;
    }
    

    if (raiz < 0)
    {
        printf("A equação não possuí raízes reais\n");
        return 1;
    }

    if (raiz == 0)
    {
        printf("Existe uma raíz: (%lf)\n",(-1*b)/(2*a));
        return 1;
    } 
    
    printf("Existem duas raízes: (%lf)(%lf)\n",((-1*b)+sqrt(raiz))/(2*a),((-1*b)-sqrt(raiz))/(2*a));

    return EXIT_SUCCESS;
}
