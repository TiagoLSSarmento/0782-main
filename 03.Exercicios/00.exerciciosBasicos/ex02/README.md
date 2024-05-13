# Exercícios Básicos - Ex02
Escreva um programa utilizando a função `puts()` que escreva o seguinte padrão no ecrã (Sem utilizar ciclos)

```text
*****
****
***
**
*
```

Agora tente repetir esse mesmo padrão recorrendo a uma só função `printf()`. Ou seja só pode invocar uma vez a função. 

# Função `printf` em C

A função `printf` é uma das funções mais utilizadas na linguagem de programação C. É parte da biblioteca padrão C `stdio.h`e é usada para enviar dados formatados para a saída padrão, geralmente o ecrã.

## Sintaxe

```c
int printf(const char *format, ...);
```

- `format`: Uma string de caracteres que contém texto a ser impresso e especificadores de formato, que são substituídos pelos valores especificados nos argumentos subsequentes.
- `...`: Representa uma quantidade variável de argumentos, dependendo do número de especificadores de formato na string format.

### Especificadores de Formato

Alguns dos especificadores de formato mais comuns são:

- `%d` ou `%i`: Imprime um inteiro em base decimal.
- `%u`: Imprime um inteiro sem sinal.
- `%f`: Imprime um número de ponto flutuante.
- `%s`: Imprime uma string.
- `%c`: Imprime um único caracter.
- `%x` ou `%X`: Imprime um número hexadecimal.
- `%%`: Imprime o símbolo de percentagem.

## Exemplos

```c
printf("Olá, mundo!\n");
printf("Ano: %d\n", 2023);
printf("Temperatura: %.2f°C\n", 23.45);
printf("Nome: %s\n", "João");

```
- O primeiro printf imprime a string "Olá, mundo!" seguida de uma nova linha.
- O segundo imprime "Ano: " seguido pelo valor 2023.
- O terceiro imprime "Temperatura: " seguido pelo valor 23.45 com duas casas decimais.
- O quarto imprime "Nome: " seguido pela string "João".