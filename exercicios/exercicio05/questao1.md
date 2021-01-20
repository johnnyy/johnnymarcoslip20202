# Exercício 05 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 20/01/2021



### Questão 01:


#### 1. a = 2 * (b - 1) - 1 { a > 0 }

```
Q { a > 0}

Q_{a -> E} =>  2 * (b - 1) - 1 > 0
               2b - 2 -1 > 0
               2b > 3
               b > 3/2

Q_{a -> E} => P {b > 3/2 }
```


#### 2. a = a + 2 * b - 1 { a > 1 }

```
Q { a > 1}

Q_{a -> E} => a + 2 * b - 1 > 1
              a + 2b > 2
              a > 2 - 2b
              a > 2 * (1 - b)


Q_{a -> E} => P {a > 2 * (1 - b) }
```