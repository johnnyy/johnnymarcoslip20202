# Exercício 04 de Linguagens de Programação
### Correção: OK. 
## Nome: Johnny Marcos Silva Soares
## Data: 13/01/2021



### Questão 01:


#### padrão:
```
do {
   expr1;
   expr2;
} while (expr3) 
```


exemplo do do-while:

```
do {
   i = i + 1;    // expr1
   x = 2 * i;    // expr2
} while (i < 10) 
```


#### Defininção de semântica operacional:
```
INICIO:
        expr1;
        expr2;
        if ( expr3 == 0 ) goto INICIO;

```

No exemplo:

```
INICIO:
        i = i + 1;
        x = 3 * i;
        if ( i < 10 ) goto INICIO;

```
