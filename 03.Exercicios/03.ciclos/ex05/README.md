# Loops - Ex 5
Faça um programa para o “jogo de adivinhar um número”. O computador deve sortear um
número entre 1 e 100 e pedir para o utilizador tentar adivinhar este número. 
O utilizador vai dizer o seu palpite, e o computador deve responder, se ele é maior ou menor que o número que ele sorteou. O programa termina somente quando se acertar exatamente no número que o computador tinha sorteado, escrevendo uma mensagem de felicitação. Deve também ser apresentado o número de tentativas que o jogador necessitou para acertar

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

## Exemplo
```text
Insira palpite-> 55
Muito pequeno
Insira palpite-> 80
Muito grande
Insira palpite-> 70
Parabéns, acertou em 3 tentativas
```
