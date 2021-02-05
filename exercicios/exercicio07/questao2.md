# Exercício 07 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 03/02/2021
## Correção: OK
### Questão 02:

```
S -> AbB | bAc
A -> Ab | aBB
B -> Ac | cBb | c
```


Forma sentencial à direita aAcccbbc.

Resposta:

```
            S
        /   |  \
       A    b   B
    /  |  \     |
   a   B    B   c
      /\   /|\     
     A  c c B b
            |
            c
```

Frases:
```
Frase 1:
alpha1 = a
alpha2 = ccbbc
A = B
beta = Ac

Frase 2:
alpha1: = aAcc
alpha2 = bbc
A = B
beta = c

Frase 3:
alpha1 = aAcccbb
alpha2 = vazio
A = B
beta = c

Frase 4:
alpha1 = aAc
alpha2 = bc
A = B
beta = ccb

Frase 5:
alpha1 = vazio
alpha2 = bc
A = A
beta = aAcccb

Frase 6:
alpha1 = vazio
alpha2 = vazio
A = S
beta = aAcccbbc

```


Frases simples:
```
Frase 1:
alpha1 = a
alpha2 = ccbbc
A = B
beta = Ac

Frase 2:
alpha1: = aAcc
alpha2 = bbc
A = B
beta = c

Frase 3:
alpha1 = aAcccbb
alpha2 = vazio
A = B
beta = c
```
O manipulador é Ac, referente a frase simples 1 que é a frase simples mais à esquerda.
