# Exercício 9

Escreva um programa em C para calcular o montante final usando a fórmula de juros compostos. O programa deve pedir ao utilizador o valor principal, a taxa de juro anual e o número de anos.

**Fórmula de Juros Compostos:** `Montante = Principal * (1 + Taxa/100) ^ Anos`

**Exemplo de Output:**

```console
Insira o principal, a taxa de juro e o número de anos: 1000 5 2
Montante final: 1102.50
```

## Dicas

## scanf para ler vários valores em simultâneo

A função scanf em C é usada para ler dados formatados do stdin (entrada padrão, geralmente o teclado). Quando se quer ler mais de um valor com scanf, é importante entender como usar especificadores de formato e separadores apropriados. Aqui está uma breve explicação:

Utilizar scanf para Ler Múltiplos Valores
1. **Especificadores de Formato:** Cada variável que se deseja ler com scanf deve ter um especificador de formato correspondente, como `%d` para inteiros, `%f` para números de ponto flutuante, `%c` para caracteres, etc.

2. **Separadores:** Na string de formato, pode incluir separadores (como espaços, vírgulas, etc.) que correspondam à forma como os dados serão inseridos pelo utilizador. Por exemplo, se os valores estão separados por espaços ou por uma nova linha, é possível usar um espaço na sua string de formato.

3. **Passagem de Variáveis:** As variáveis que receberão os valores devem ser passadas para o `scanf` por referência, ou seja, deve-se usar o operador `&` antes do nome da variável, exceto para strings (arrays de caracteres).

Exemplos

```c
int a, b;
printf("Insira dois números: ");
scanf("%d %d", &a, &b);

```

```c

char ch;
float f;
printf("insira um caractere e um número: ");
scanf("%c %f", &ch, &f);

```


## utilização da biblioteca math, e da função de potência

A biblioteca math.h em C fornece uma variedade de funções matemáticas, incluindo a função `pow`. A função `pow` é usada para calcular a potência de um número, ou seja, elevar um número base a um expoente. 

Para usar a função `pow` ou qualquer outra função matemática da biblioteca `math.h`, é necessário incluir esta biblioteca no topo do  programa C. Isso é feito com a diretiva `#include`

**Exemplo**

```c
#include <stdio.h>
#include <math.h>

int main() {
    double base, expoente, resultado;

    printf("Escreva a base e o expoente: ");
    scanf("%lf %lf", &base, &expoente);

    resultado = pow(base, expoente);

    printf("%.2lf elevado a %.2lf é %.2lf\n", base, expoente, resultado);
    return 0;
}

```

Importante: Ao compilar programas que usam math.h e as suas funções, é necessário vincular  a biblioteca matemática. Em muitos ambientes de compilação, isso é feito adicionando `-lm` ao final do comando de compilação. Por exemplo: 

```console
gcc programa.c -o teste.out -lm.
```

