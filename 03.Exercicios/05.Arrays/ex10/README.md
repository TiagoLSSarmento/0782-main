# Ex 10 - Left Shift de um array

**Objetivo:** Escreva uma função em C para rodar um array para a esquerda por n posições. A função deve ser chamada `shiftEsquerda`.

**Descrição:**
A função `shiftEsquerda` deve aceitar três parâmetros: 
- um array de inteiros `arr`, 
- o tamanho do array `n`, e 
- o número de posições `shift` para rodar o array para a esquerda. 
 
A função não deve retornar um valor, mas sim modificar o array original.

A função main deve ter o seguintes formato, devendo ser implementadas todas as funções necessárias

 ```c
int main(int argc, char const *argv[])
{
    int n,shift;
    printf("Insira o tamanho do array: ");
    scanf("%d", &n);
    int array[n];
    carregarArray(array, n);
    puts("--- ARRAY INSERIDO ---");
    printArray(array, n);
    printf("Insira o shift a aplicar ao array: ");
    scanf("%d", &shift);
    shiftEsquerda(array, n, shift);
    printf("--- ARRAY COM SHIFT: %d ---",shift);
    printDuplicados(array,n);
    return EXIT_SUCCESS;
}
 ```

 > **Exemplo:** Para o array `[1,2,3,4,5]` a função com `shift=3` deverá alterar o array para `[4,5,1,2,3]` 