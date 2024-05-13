# Ex 06 - MatrizArrays multidimensionais
Efetue um programa onde solicite ao utilizadores os valores de duas matrizes de dimensão `[2][2]`
Posteriormente escrever o resultado da soma das matrizes no ecrã. A soma de matrizes é feita elemento a elemento.
Ou seja, por exemplo `result[0][0] = a[0][0] + b[0][0]` ou `result[1][0] = a[1][0] + b[1][0]`

Declaração das 3 matrizes necessárias:
```c
float a[2][2], b[2][2], result[2][2];
```

Para pedir os valores aos utilizadores e o resultado deve ser segundo o exemplo abaixo (o resultado é sempre apresentado com duas casas decimais):
```shell
Matriz 1:
Insira [0][0]->4.50
....
Insira [1][1]->4.4

Matriz 2:
Insira [0][0]->7.50
....
Insira [1][1]->4.4

Resultado da soma das matrizes:
[0][0]=12.00
....
[1][1]=8.80

```

**Nota:** A soma de duas matrizes é feita posição a posição `a[1][2]=b[1][2]+c[1][2]`
