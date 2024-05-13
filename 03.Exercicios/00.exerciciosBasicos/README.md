[[_TOC_]]
# Pasta com exercícios Básicos
## Enquadramento e compilação do 1º programa
O C é uma das mais antigas linguagens de programação. Foi desenvolvida nos anos 70, mas ainda hoje é muito poderosa devido ao seu baixo nível. Aprender a programar em C é uma ótima forma de introdução à linguagens mais complexas, e o conhecimento que se ganha é útil para quase todas as linguagens de programação. 
### Compilador
Um código em C para ser executado pelo SO necessita de ser compilado por um programa que traduz os códigos em sinais que a máquina possa entender. Os compiladores geralmente são gratuitos e existem diferentes versões deles para cada SO. Uma vez que o compilador transforma um conjunto de comandos (ficheiro .c) num executável, este está dependente do SO e para cada SO existem compiladores específicos.
No nosso caso iremos utilizar o GCC (GNU C Compiler). Para instalar devemos

```console
# Instalar
sudo apt update 
sudo apt install build-essential

# verificar a versão
gcc --version

```

```console 
#Output
gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

Para compilar um ficheiro em c deve-se executar `gcc nome_ficheiro.c -o nome_executavel`. O compilador irá compilar o conteúdo do ficheiro .c e criar um executável com o nome definido na opção `-o`.

```console
# compilação
gcc ex01.c -o test.out

# Execução do ficheiro
./test.out

```

## Estrutura de um programa
### Primeiro Programa
É comum que o primeiro programa escrito numa linguagem de programação seja um programa que escreve "Hello world!" ("Olá mundo!"). Apresentamos o código e, a seguir, analisaremos cada uma de suas linhas. 

```c
/* o meu primeiro programa */
#include <stdio.h>
    int main()
    {
       printf ("Olá, mundo!");
       return (0);
    }
```
- A primeira linha é um comentário, que para o compilador não tem nenhum significado. Qualquer texto que esteja entre as marcações `/*` e `*/`, podendo inclusive ocupar várias linhas, será considerado como comentário e será completamente ignorado pelo compilador. É muito útil como documentação, explicando o que as próximas linhas de código fazem.
- Na segunda linha, pede que seja inserido o conteúdo do arquivo stdio.h (que está num lugar já conhecido pelo compilador). Esse ficheiro contém referências a diversas funções de entrada e saída de dados (stdio é abreviatura de Standard Input/Output, ou Entrada e Saída Padrão), pelo que esta biblioteca será necessária em praticamente todos os programas — ele é o meio de quase toda comunicação com o teclado, com o ecrã e com ficheiros.
- Os programas em C são organizados em funções — todo o código num programa C deve fazer parte de uma, ou mais, funções. Em particular, todos os programas devem possuir uma função chamada `main`, pela qual será iniciada a execução do programa. A função é definida, no nosso exemplo, na linha 3, e como se pode verificar é delimitada pelas chavetas `{ }`. Todo o código dentro dessas chavetas pertence à função main.
- A palavra-chave `int` significa que a função devolve um valor inteiro (podemos pensar nesse valor exatamente como o valor de uma função em matemática).
- A função printf, que imprime no ecrã (Standard output) os parâmetros que lhe foram passados — no nosso exemplo, passamos a sequência de caracteres "Olá, mundo!" como parâmetro. Essa é uma das funções definidas na biblioteca C, o ficheiro `stdio.h`.
- Na linha 6, última da função main, dizemos que a função main deve devolver (ou retornar) o valor 0 e terminar a sua execução. (Esse é o valor inteiro que dissemos que íamos retornar na linha 3.)


### Estrutura
Um programa em C é basicamente estruturado em blocos de código. Blocos nada mais são que conjuntos de instruções, e devem ser delimitados com chavetas `{ ... }`.
Um bloco também pode conter outros blocos.Referir, de igual modo, que uma instrução corresponde geralmente a uma ação executada, e deve sempre terminar com ponto-e-vírgula `;`.
O compilador ignora espaços, tabulações e quebras de linha no meio do código. A esses caracteres dá-se, genericamente, o nome de espaço em branco (whitespace). Ou seja, os dois blocos de código abaixo são equivalentes:

```c
 printf("Olá mundo");return 0;
```

```c
 printf("Olá mundo");
 return 0;
```

## biblioteca <stdio.h>
Em C as bibliotecas são sempre compostas por um ficheiro `.h` e um ficheiro `.c`. No primeiro estão declaradas os cabeçalhos das funções que compõem a biblioteca (.h significa headers). Trabalhar com biblioteca de funções significa saber o que é que cada função faz, não interessando a forma como foi implementada (escrita em C).

A biblioteca stdio.h apresenta um conjunto de funções que nos permitem trabalhar outputs e inputs do nosso programa. Por outras palavras, escrever algo num ficheiro ou no ecrã, bem como solicitar dados ao utilizador do nosso ecrã, ou ler de um ficheiro. 

### Escrever no standard output (ecrã)
A função mais simples de escrita é o `puts` (Put String). Veja abaixo um exemplo na utilização desta função.

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    puts("Vitor Custódio");
    return 0;
}

```
----------

Uma outra função é o `printf`, abreviatura de printed formatted. Veja o exemplo abaixo.
```c
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("******\n");
    printf("O meu nome é %s","Vitor");
    int a=5;
    printf("O número a=%d",a);
    printf("%d+%d=%d",5,4,5+4);
    return EXIT_SUCCESS;
}
```

Ao contrário do puts, o printf permite a entrada de mais argumentos. O 1º argumento é obrigatório e é o chamado de "String de Controlo", que é uma sequência de caracteres delimitados por aspas (`"`). Aí, podemos através do caracter especial `%` definir a entrada de valores (variáveis ou não), que terão que ser especificados no 2º, 3º, etc parâmetros. A existência do caracter `%` na sequência de controlo implica que serão necessários adicionar esses argumentos À função, sempre separados pelo caracter `,`. A acompanhar o caracter especial `%` existe uma letra (e/ou números) que nos permite determinar o tipo de dado e o seu formato.

|  Formato |   Significado|
|---|---|
| `%i` ou `%d`  |  inteiro |
|  `%c` |   caracter|
|  `%f` |   float|
|  `%lf` |   double|
|  `%s` |   string|

