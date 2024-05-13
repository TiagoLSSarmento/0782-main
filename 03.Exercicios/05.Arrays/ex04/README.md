# Arrays Ex 04
Escreve um programa que gere, aleatoriamente, 10 números inteiros entre 1 e 100 e os armazene num vetor de inteiros.
Em seguida, Solicitar ao utilizador palpites de inteiros, até que acerte num desses 10 números. No final escrever quantas tentativas o utilizador gastou para acertar:

```shell
Diga um inteiro (1-100)->23
Não existe!!
Diga um inteiro (1-100)->1
Não existe!!
Diga um inteiro (1-100)->66
Parabéns, acertou em 3 tentativas
```
## Dica: 
Para gerar um número qualquer entre 0 e 100, use um comando como o deste exemplo indicado logo a seguir.
```c
#include <time.h> //para a função time
#include <stdlib.h> //para a a geração de número aleatórios
#include <stdio.h> //Para leitura e escrita

srand(time(NULL));   // Inicialização. Só é chamado uma vez.
int r = 1+rand()%100;      // Returns a pseudo-random integer between 0 and RAND_MAX.
//O resto de um número inteiro dividido por 100 está entre 0 e 99, pelo que para ter um número entre 1 e 100 temos que adicionar 1
```
