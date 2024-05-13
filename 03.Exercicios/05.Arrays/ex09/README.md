# Ex 09

 Escreva um programa em C para encontrar todos os elementos duplicados num array. Ou seja, deve escrever no ecrã todos os elementos duplicados desse array, devendo para tal ser implementada uma fução.

 A função main deve ser a que se coloca abaixo:

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
    puts("--- ELEMENTOS DUPLICADOS ---");
    printDuplicados(array,n);
    return EXIT_SUCCESS;
}
 ```

 > Exemplo: Se o array inserido for `[4,3,7,7,7,3,2]` o output esperado será `3 7`. Notar duas questões: A ordem (o número 3 é analisado antes de 7) e que embora o 7 se repita mais que uma vez só é escrito uma única vez


 >**Dica:** Pode usar dois cilcos entrelaçados