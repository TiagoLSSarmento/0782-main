# Estruturas Decisão Condicional - Ex02
Efetue um programa em C que solicite um carater ao utilizador e diga se é, ou não é, uma vogal.

- Dica
  - Não se esqueça que existem vogais minúsculas e maiúsculas 
  - Não se esqueça que em C caracteres são inteiros que representam um caracter na tabela ASCII. Consulte a tabela [aqui](https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm)
  - Existem duas abordagens:
    - Comparar se o carater é igual a cada uma das vogais: `c == 'a'` ou `c == 'b'` ou ....
    - Ver se o carater inserido encontra-se entre os valores `c >='a'` e `c <= 'u'` ou se está entre os valores das vogais maiúsculas
    - Não se esqueça que em c escrever  `c >= 'a'` é igual a ` c >= 97` (97 é o valor decimal do caracter a na tabela ASCII)

- Instruções
    - Criar um ficheiro ex02.c
    - Compilar com o comando `gcc ex02.c -o ex02.out`
    - Executar com `./ex02.out`

Exemplos do comportamento esperado da aplicação:
```text
Insira um carater->v
O carater v não é uma vogal
```

```text
Insira um carater->a
O carater v é uma vogal
```

