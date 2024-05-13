# Estruturas Decisão Condicional - Ex03
Efetue um programa em C e o respetivo diagrama de fluxo que peça um ano ao utilizador (inteiro maior que zero) e diga se esse ano correspondeu, ou corresponderá, a um ano bissexto.

- Dicas (Cálculo Ano Bissexto)
    - São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800...
    - São bissextos todos os múltiplos de 4, exceto se for múltiplo de 100 mas não de 400, p.ex: 1996, 2000, 2004, 2008, 2012, 2016, 2020...
    - Não são bissextos todos os demais anos.
    - Algoritmo em linguagem natural:
        1. Declara inteiro
        2. Pede inteiro (ano)
        3. Se ano é múltiplo de 400 é bissexto
        4. Se for múltiplo de 4 e não de 100 é bissexto
        5. Todos os outros não são bissextos
    - Um número inteiro (n) é múltiplo de outro(m) se o resto da divisão inteira é 0 `n%m==0`

- Instruções
    - Criar um ficheiro ex03.c
    - Compilar com o comando `gcc ex03.c -o ex03.out`
    - Executar com `./ex03.out`

Exemplo do comportamento esperado da aplicação:
```text
Insira um ano->1996
1996 é Bissexto
```

```text
Insira um ano->1997
1997 não é Bissexto
```
