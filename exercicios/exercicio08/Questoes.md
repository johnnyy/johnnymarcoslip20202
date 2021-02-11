# Exercício 08 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 10/02/2021
## Questão 01 - Problema 06, Capítulo 05
### Correção: OK

Considere o seguinte esqueleto de programa em Ada:

```
procedure Main is
      X : Integer; -- Primeira Declaração de X
      procedure Sub3; -- Essa é uma declaração de Sub3
                      -- Ela permite que Sub3 a chame
      procedure Sub1 is
         X : Integer; -- Segunda Declaração de X
         procedure Sub2 is
            begin -- de Sub2
            ...
            end; -- de Sub2
         begin -- de Sub1
         ...
         end; -- de Sub1
      procedure Sub3 is
         begin -- de Sub3
         ...
         end; -- de Sub3
   begin -- de Main
   ...
   end; -- de Main
```

Assuma que a execução desse programa é na seguinte ordem de invocações:

```
Main chama Sub1
Sub1 chama Sub2
Sub2 chama Sub3
```

+ a) Assumindo escopo estático, qual a declaração de X (primeira ou segunda) é correta dentro de 
  1. Sub1 - Segunda Declaração
  2. Sub2 - Segunda Declaração
  3. Sub3 - Primeira Declaração
+ b) Repita a parte a), mas assuma escopo dinâmico.

  1. Sub1 - Segunda Declaração
  2. Sub2 - Segunda Declaração
  3. Sub3 - Segunda Declaração
  

## Questão 02 - Problema 07, Capítulo 05

Assuma que o seguinte programa Ada foi compilado e executado usando regras de escopo estático. Que valor de X é impresso no procedimento _Sub1_? Sob regras de escopo dinâmico, qual o valor de X impresso no procedimento _Sub1_?

```
procedure Main is
   X : Integer;
   procedure Sub1 is
      begin -- de Sub1
      Put(X); -- Considere Put como um Print
      end; -- de Sub1
   procedure Sub2 is
      X : Integer;
      begin -- de Sub2
      X := 10;
      Sub1
      end; -- de Sub2
   begin -- de Main
   X := 5;
   Sub2
   end; -- de Main
```

Escopo Estático:

    X = 5

Escopo Dinâmico:

    X = 10

## Questão 03 - Problema 10, Capítulo 05

Considere o programa em C:

```
void fun(void) {
   int a, b, c; /* definição 1 */
   ...
   while (...) {
      int b, c, d; /* definição 2 */
      ... <-------------- 1
      while (...) {
         int c, d, e; /* definição 3 */
         ... <------------- 2
      }
      ... <-------------- 3
   }
   ... <---------------- 4
} 
```

Para cada um dos quatro pontos marcados nessa função, liste cada variável visível, com o número da sentença de definição que a define. 

1:

    a - definição 1;
    b - definição 2;
    c - definição 2;
    d - definição 2;

2:

    a - definição 1;
    b - definição 2;
    c - definição 3;
    d - definição 3;
    e - definição 3;

3:

    a - definição 1;
    b - definição 2;
    c - definição 2;
    d - definição 2;

4:

    a - definição 1;
    b - definição 1;
    c - definição 1;


## Questão 04 - Problema 11, Capítulo 05

Considere o seguinte esqueleto de programa em C:

```
void fun1(void); /* protótipo */
void fun2(void); /* protótipo */ 
void fun3(void); /* protótipo */

void main() {
int a, b, c;
   ...
}
void fun1(void) {
   int b, c, d;
   ...
}
void fun2(void) {
   int c, d, e;
   ...
}
void fun3(void) {
   int d, e, f;
   ...
} 
```

Dada as seguintes sequências de chamadas e assumindo que o escopo dinâmico é usado, que variáveis são visíveis durante a execução da última função chamada?
Inclua com cada variável visível o nome da função na qual ela foi definida.

* a) main chama fun1; fun1 chama fun2; fun2 chama fun3.

        a - main;
        b - func1;
        c - func2;
        d - func3;
        e - func3;
        f - func3;



* b) main chama fun1; fun1 chama fun3.

        a - main;
        b - func1;
        c - func1;
        d - func3;
        e - func3;
        f - func3;


* c) main chama fun2; fun2 chama fun3; fun3 chama fun1.

        a - main;
        b - func1;
        c - func1;
        d - func1;
        e - func3;
        f - func3;


* d) main chama fun3; fun3 chama fun1.

        a - main;
        b - func1;
        c - func1;
        d - func1;
        e - func3;
        f - func3;

* e) main chama fun1; fun1 chama fun3; fun3 chama fun2.

        a - main;
        b - func1;
        c - func2;
        d - func2;
        e - func2;
        f - func3;
        
        
* f) main chama fun3; fun3 chama fun2; fun2 chama fun1.

        a - main;
        b - func1;
        c - func1;
        d - func1;
        e - func2;
        f - func3;
