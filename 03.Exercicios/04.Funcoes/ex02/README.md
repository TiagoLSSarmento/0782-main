# Exercício 02 - Funções

Escreva uma função `int numPrimo(int num)` para verificar se um inteiro é um número primo. De modo a poder verificar o resultado da função numa estrutura if, lembrar que em "C" o valor zero é **FALSO** e o valor diferente de zero (por exemplo 1) é **VERDADEIRO**

Na função main do seu programa solicite inteiros ao utilizador e teste.

Chamada da função:
```c
if(numPrimo(3)){
    //É primo
}else{
    //Não é primo
}
```

## Dica
Números Primos são aqueles que são divisíveis apenas por 1 e por eles próprios. Ou seja, para verificar se é primo podemos usar o seguinte algoritmo:

- Dado: n inteiro.
- Se n≤1 então não é primo e terminamos imediatamente.
- Se n>1 tentamos verificar se a divisão de n por d dá resto 0 para d=2,3,…,n/2:
- se d divide n (resto zero) terminamos (não é primo)
- caso contrário, continuamos a procurar
- Se chegamos ao final sem encontrar um divisor: concluímos que n é primo.
