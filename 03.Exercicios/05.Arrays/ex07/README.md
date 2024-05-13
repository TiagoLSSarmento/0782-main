# Ex 07
 Escreva um programa em C que inverte um array sem usar um array auxiliar.

 ## Requisitos
  
- O programa deve implementar as seguintes funções:
  - `void inverterArray(int *arr, int dim)`: inverte o array. Por exemplo se o array dado for `arr=[5,9,2]` a função irá transformar esse array em `arr=[2,9,5]`
  - `void carregarArray(int *arr, int dim)`: Solicitar os dados do Array ao utilizador
  - `void printArray(int *arr, int dim)`: imprimir o array no ecrã
- A função main deverá possuir a seguinte estrutura:
  
```c
int main(int argc, char const *argv[])
{
    int n;
    printf("Insira o tamanho do array: ");
    scanf("%d", &n);
    int array[n];
    carregarArray(array,n);
    puts("--- ARRAY INSERIDO ---");
    printArray(array,n);
    inverterArray(array,n);
    puts("--- ARRAY INVERTIDO ---");
    printArray(array,n);
    return EXIT_SUCCESS;
}
```