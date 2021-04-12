 # Atividade 19 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 07/04/2021
### Questão 01 - 0,5 ponto

#### 1. Passadas por valor

```
Chamada 1:

    value = 2
    list = {1, 3, 5, 7, 9}

Chamada 2:
    value = 2
    list = {1, 3, 5, 7, 9}

Chamada 3:

    value = 2
    list = {1, 3, 5, 7, 9}
```

#### 2. Passadas por referência

```
Chamada 1:

    value = 1
    list = {2, 3, 5, 7, 9}

Chamada 2:
    Correção: Por que value é alterado aqui?
    value = 2
    list = {3, 1, 5, 7, 9}

Chamada 3:

    value = 5
    list = {3, 1, 2, 7, 9}
```

#### 3. Passadas por valor-resultado

```
Chamada 1:

    value = 1
    list = {2, 3, 5, 7, 9}

Chamada 2:

    value = 2
    list = {3, 1, 5, 7, 9}

Chamada 3:

    value = 5
    list = {3, 1, 2, 7, 9}
```
#### Correção:
Não entendi a questão o _value_ ser alterado na chamada que não envolve ela.


### Questão 02 - 0,5 ponto

#### 1. Passadas por valor

```
    list = {1, 3}
```

#### 2. Passadas por referência
##### Correção: não seria {2, 6}?

```
    list = {4, 6}
```

#### 3. Passadas por valor-resultado

```
    list = {4, 6}
```
