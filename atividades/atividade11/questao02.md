# Atividade 11 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 10/02/2021


### Questão 02:
#### Correção: 0,8. O papel da seção GOTO da tabela não está claro.

gramática:
```
1. E -> E + T
2. E -> T
3. T -> T * F
4. T -> F
5. F -> (E)
6. F -> id
```

Análise sintática para a cadeia:
```
id * (id + id)
```
 pilha | entrada | ações
---- |----- | -------
0 |id * (id + id)$     | S5
0id5 |* (id + id)$| R6
0F3  |* (id + id)$| R4
0T2  |* (id + id)$| S7
0T2*7| (id + id)$| S4
0T2*7(4| id + id)$ | S5
0T2*7(4id5| + id)$ | R6
0T2*7(4F3 | + id)$ | R4
0T2*7(4T2 | + id)$ | R2
0T2*7(4E8 | + id)$ | S6
0T2*7(4E8+6 | id)$ | S5
0T2*7(4E8+6id5 | )$ | R6
0T2*7(4E8+6F3| )$ | R4
0T2*7(4E8+6T9| )$ | R1
0T2*7(4E8| )$ | S11
0T2*7(4E8)11| $ | R5
0T2*7F10| $ | R3
0T2 | $ | R2
0E1 | $ | aceitar 


Portanto, a cadeia foi aceita.
