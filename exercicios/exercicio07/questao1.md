# Exercício 07 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 03/02/2021

### Questão 01:

```
S -> aAb | bBA
A -> ab | aAB
B -> aB | b
```

Forma sentencial à direita aaAbb.

Resposta:

```
            S
          / | \
         a  A  b
          / | \
         a  A  B
               |
               b
```

Frases:
```
Frase 1:
alpha1 = aaA
alpha2 = b
A = B
beta = b

Frase 2:
alpha1: = a
alpha2 = b
A = A
beta = aAb

Frase 3:
alpha1 = vazio
alpha2 = vazio
A = S
beta = aaAbb
```

Frases simples:
```
Frase:
alpha1 = aaA
alpha2 = b
A = B
beta = b
```

O manipulador é b.