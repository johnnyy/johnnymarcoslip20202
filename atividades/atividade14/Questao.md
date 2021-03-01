 # Atividade 14 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 03/03/2021

### Questão 01 

Considerando que as funções conhecem o endereço de memória **matrix**.

Além de considerar que a matriz 3d possui o valor **n** em cada dimensão.

### Ordem principal de linha

##### Pseudocódigo:
```
function get_position_line(i, j, k)
    return matrix + i + n * j + n * n * k
```

##### Python:


Considerando,

    ```
    import numpy as np
    n = 100
    matrix = np.array(range(n*n*n))
    ```


Função
```
def get_position_line(i, j, k):
    return matrix[
        i + n * j + n * n * k
        ]
```


### Ordem principal de coluna

##### Pseudocódigo:
```
function get_position_column(i, j, k)
    return matrix + n * i + j + n * n * k
```

##### Python:


Considerando,

    ```
    import numpy as np
    n = 100
    matrix = np.array(range(n*n*n))
    ```


Função
```
def get_position_column(i,j,k):
    return matrix[
        n * i + j + n * n * k
        ]
```

