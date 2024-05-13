#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    a=9;
    int b=10;

    printf("Valor a=%d\nValor de b=%d\n",a,b);
    printf("Tamanho de a=%lu bytes\nTamanho de b=%lu bytes\n",sizeof(a),sizeof(b));

    int n= 4;
    int p=3;
    printf("n/p=%f\n",1.0*n/p);
    printf("O resto da divisao 4/3 vai ser=%d\n",n%p);
    return 0;
}
