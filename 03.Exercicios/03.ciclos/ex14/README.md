# Ex 14

## Máximo Divisor Comum com Contador de Iterações

Escrever um programa em C que pede ao utilizador para inserir dois números inteiros positivos. O programa deve então calcular o Máximo Divisor Comum (MDC) desses dois números usando o algoritmo de Euclides e contar o número de iterações (passos) necessárias para chegar ao resultado.

> Para saber mais sobre o MDC ver [MDC - Wikipedia](https://pt.wikipedia.org/wiki/M%C3%A1ximo_divisor_comum)


## Algoritmo de Euclides

O Algoritmo de Euclides é um método antigo e eficiente para encontrar o Máximo Divisor Comum (MDC) de dois números inteiros. O algoritmo baseia-se no princípio de que o MDC de dois números também divide a diferença entre esses números. Na sua forma mais básica, o algoritmo de Euclides pode ser expresso no seguinte pseudocódigo:

```text
Algoritmo de Euclides para calcular o MDC de dois números a e b:

1. Enquanto b ≠ 0:
    1.1. Temporariamente armazene o valor de b em temp.
    1.2. Atualize o valor de b para o resto da divisão de a por b.
    1.3. Atualize o valor de a para temp (o antigo valor de b).
2. Retorne a como o MDC de a e b.


```

## Detalhes e funcionamento do programa

1. O utilizador fornece dois números inteiros positivos.
2. Os números são testados. Se algum deles não for inteiro positivo, ou se forem iguais apresentar erro e sair;
3. O programa calcula o MDC desses dois números utilizando o algoritmo de Euclides.
4. A cada passo do algoritmo de Euclides (iteração no ociclo), o programa incrementa um contador de iterações.
5. Ao final, o programa exibe o MDC encontrado e o número de iterações necessárias.