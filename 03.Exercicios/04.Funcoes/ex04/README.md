# Exercício 4 - Funções
Escreva uma função que, recebendo dois inteiros, devolva o Máximo Divisor Comum, entre eles.`int maxDivCom(int a, int b)`

## Máximo divisor Comum
O máximo divisor comum (mdc) de dois inteiros a,b é o maior número inteiro que divide a e b. Veja o exemplo:
```markdown
252 = 21 x 12
105 = 21 x 5
- 21 é divisor de 252 e 105
- 21 é o maior divisor destes dois números
- Logo, 21 é o mdc de 252 e 105
```

## Como calcular - Algoritmo de Euclides
Dados: a,b dois números inteiros positivos.

1. se a = b então terminamos; o mdc é a e b (são iguais).
2. se a > b então: `a←a−b` e repetimos o passo 1.
3. se a < b então: `b←b−a` e repetimos o passo 1.