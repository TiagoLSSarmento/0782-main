# Ex 07 - Verificar se um Vetor é palíndromo

> **Palíndromo:** Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante. Por extensão, palíndromo é qualquer série de elementos com simetria linear, ou seja, que apresenta a mesma sequência de unidades nos dois sentidos. ver mais em [Wikipedia](https://pt.wikipedia.org/wiki/Pal%C3%ADndromo)

## Requisitos da aplicação

A função main deve possuir a estrutura abaixo, devendo ser implementadas as funções aí invocadas

```c
int main(int argc, char const *argv[])
{
    int n;
    printf("Insira o tamanho do array: ");
    scanf("%d", &n);
    int array[n];
    carregarArray(array, n);
    puts("--- ARRAY INSERIDO ---");
    printArray(array, n);
    if(isPalindromo(array, n)) {
        printf("O array é palíndromo.\n");
    } else {
        printf("O array não é palíndromo.\n");
    }
    
    return EXIT_SUCCESS;
}
```