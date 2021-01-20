# Exercício 05 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 20/01/2021



### Questão 02:


#### 1.
```
a = 2 * b + 1;    
b = a - 3; { b < 0 }
```      


Resposta:

```
Q { b < 0}

Q_{b -> E} =>  a - 3 < 0
               a < 3

Q_{b -> E} => P {a < 3}
```

```
Então,

    a = 2 * b + 1; {a < 3} 
    {a < 3} b = a - 3; { b < 0 }

```

```

Q { a < 3}

Q_{a -> E} => 2 * b + 1 < 3
              2 * b < 2
              b < 1

Q_{a -> E} => P {b < 1}

```
```
Portanto,

    {b < 1} a = 2 * b + 1; {a < 3} 
    {a < 3} b = a - 3; { b < 0 }

```



#### 2.
```
if (a == b)
    b = 2 * a + 1;
else
    b = 2 * a;
{ b > 1 }
```

Resposta:

```
Q { b > 1}

Q_{b -> E} =>  2 * a > 1
               a > 1/2

Q_{b -> E} => P {a > 1/2}

E 

Q { b > 1}

Q_{b -> E} =>  2 * a + 1 > 1
               2 * a > 0
               a > 0 

Q_{b -> E} => P {a > 0}
```

```
Portanto,

if (a == b)
   {a > 0}   b = 2 * a + 1;
else
   {a > 1/2} b = 2 * a;
{ b > 1 }

Para respeitar as duas condições a pré-condição é {a > 1/2}.
Então,

{a > 1/2}
if (a == b)
    b = 2 * a + 1;
else
    b = 2 * a;
{ b > 1 }
```