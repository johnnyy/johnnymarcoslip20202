# Atividade 12 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 17/02/2021

### Questão 01 

##### 1 - O que é lado esquerdo de uma variável? O que é o lado direito?

O lado esquerdo de uma variável possui o valor (l-value) correspondetne ao endereço, no qual é utilizado quando uma variável a aparece do lado esquedo de uma atribuição.
Já o lado direito da variável é referente ao valor atribuído a ela, sendo utilizado quando a variável se localiza do lado direito de uma atribuição.


##### 2 - Após o projeto e implementação de uma linguagem, quais são os quatro tipos de vinculações que podem ocorrer em um programa?

- Vinculação de atributos a variáveis: 
É a vinculação que é dividida em estática e dinâmica, no qual, tem relação com a vinculação física de uma variável a uma célula de armazenamento em um ambiente de memória virtual.

- Vinculação de tipos: É a vinculação que deve ser feita antes da variável ser referenciada em um programa, pois associa uma variável à um tipo de dado existente.

- Vinculação de armazenamento e tempo de vida: Está associada a vinculação da variável à memória e também de liberação. Além disso, o tempo de vida é o tempo que uma variável está vinculada a uma posição específica da memória.


##### 3 - Defina vinculação estática e vinculação dinâmica.
A vinculação estática ocorre pela primeira vez antes do tempo de execução e permanece intocada ao longo da execução do programa.
A vinculação é dinâmica qundo ocorre pela primeira vez durante o tempo de execução ou pode ser mudada ao longo do curso da execução do programa.


##### 4 - Defina variáveis estáticas, dinâmicas na pilha, dinâmicas no monte explícitas e dinâmicas do monte implícitas. Apresente exemplos em linguagens de programação, com trechos de código.


Variável estática: São vinculadas a células de memória ants do início da execução do programa termine

Em C pode ser utilizado o ```static int a = 10``` para definir variáveis estáticas.


Variável dinâmica na pilha: São aquelas cujas vinculações de armaenamento são criadas quando suas sentenças de declaração são elaboradas.
Em C++ por exemplo:
```
    int main(){
        int a;
    }
```

Variável dinâmica no monte explícita: São celulas de memória não noemadas alocadas e liberadas por instruções explícitas em tempo de execução pelo programador.
Em C++:
```
int *intnode;
intnode = new int;
delete intnode;
```

Variável do monte implícita: São vinculadas ao armazenamento no monte apenas quando são atribuídos valores a elas. Por exemplo, em JavaScript:

```
highs = [74, 84 ,86, 90, 71];
```


### Questão 2:

```
Tempo gasto chamada estática em segundos com 5 casas decimais: 0.00079
Tempo gasto chamada pilha em segundos com 5 casas decimais: 0.00930
Tempo gasto chamada monte em segundos com 5 casas decimais: 0.11675
```

A chamada estática vincula apenas uma vez os dados a memória antes do início da execução do programa, portanto, possui mais velocidade que as outras abordagens.

Já a chamada na pilha estabelece um quantidade de memória que será utilizada em cada execução (tempo de execução), portanto, não é tão eficiente quanto as variáveis estáticas.

Já a variável do monte explícita é criada pelo programador em tempo de execução e é chamada por um subprograma de sistema  em C, portanto, é mais lento.