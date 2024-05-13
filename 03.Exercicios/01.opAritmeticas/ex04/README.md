# Op Aritméticas - Ex04
Efetue um programa em C que escreva no ecrã a decomposição em número de dias, semanas e anos presentes numa certa quantidade de dias. No final escreva ainda o número total de minutos que existem na quantidade de dias inserido.

- Dica
    - Ignore os anos bissextos. Conte sempre com 365 dias ano
    - Cada semana possui 7 dias
    - No exemplo abaixo, repare que 1329=(3 x 365) + (33 x 7) + 3
    - Ou seja comece por dividir o número total de dias por 365 (anos). O resto dessa divisão deverá ser dividido depois por 7(semanas), sendo o resto da divisão por 7 o número de dias
 


Exemplo do comportamento esperado da aplicação:
```text
Insira numero de dias->1329
Anos:3
Semanas:33
Dias:3
Total de minutos em 1329 dias é: 1913760

```