# Atividade 09 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 27/01/2021
### Correção: 1,0


### Questão 01:

#### 1. b = (c + 10) / 3  { b > 6 }

```
Q { b > 6 }

Q_{b -> E} =>  (c + 10) / 3 > 6
                c / 3 + 10 / 3 > 6
                c / 3 > 6 - 10 / 3
                c / 3 > 18 / 3 - 10 / 3
                c / 3 > 8 / 3
                c > 8

Q_{b -> E} => P {c > 8 }
```


#### 2. x = 2 * y + x - 1 { x > 11 }

```
Q { x > 11 }

Q_{x -> E} =>  2 * y + x - 1 > 11
               2 * y > 11 + 1 - x
               2 * y > 12 - x
               y > (12 - x) / 2

Q_{x -> E} => P {y > (12 - x) / 2 }
```

#### 3 . a = 3 * (2 * b + a); b = 2 * a - 1; { b > 5 }

```
a = 3 * (2 * b + a);    
b = 2 * a - 1; { b > 5 }
```      



```
Q { b > 5}

Q_{b -> E} =>  2 * a - 1 > 5
               2 * a > 6
               a > 6 / 2
               a > 3
               
Q_{b -> E} => P {a > 3}

Então,
     a = 3 * (2 * b + a); {a > 3} 
    {a > 3} b = 2 * a - 1; { b > 5 }



Q { a > 3}

Q_{a -> E} => 3 * (2 * b + a) > 3
              6 * b + 3 * a > 3
              3 * a > 3 - 6 * b
              a > 1 - 2 * b

Q_{a -> E} => P {a > 1 - 2 * b}

```
```
Portanto,

    {a > 1 - 2 * b} a = 3 * (2 * b + a); {a > 3} 
    {a > 3} b = 2 * a - 1; { b > 5 }

```


#### 4 . if ( x < y ) x = x + 1; else x = 3 * x; { x < 0 }

```
if ( x < y )
    x = x + 1;
else
    x = 3 * x;

{ x < 0 }
```      

Resposta:

```
Q { x < 0}

Caso 1:

Q_{x -> E} =>  x + 1 < 0
               x < - 1

Q_{x -> E} => P {x < - 1}

Caso 2:

Q { x < 0}

Q_{x -> E} => 3 * x < 0
              x < 0   

Q_{x -> E} => P {x < 0}

Portanto,

if ( x < y )
    { x < - 1 } x = x + 1;
else
    { x < 0 } x = 3 * x;

{ x < 0 }
```

```
Para respeitar as duas condições, a pré-condição mais fraca é {x < - 1}.
Então,

{ x < - 1 }

if ( x < y )
    x = x + 1;
else
    x = 3 * x;

{ x < 0 }
```



#### 5 . if ( x > y ) y = 2 * x + 1; else y = 3 * x - 1; { y > 3 }

```
if ( x > y )
    y = 2 * x + 1;
else
    y = 3 * x - 1;

{ y > 3 }
```      

Resposta:

```
Q { y > 3}

Caso 1:

Q_{y -> E} =>  2 * x + 1 > 3
               2 * x + 1 > 3
               2 * x > 2
               x > 1
               

Q_{y -> E} => P {x > 1}

Caso 2:

Q {y > 3}

Q_{y -> E} => 3 * x - 1 > 3
              3 * x > 4
              x > 4 / 3

Q_{y -> E} => P {x > 4 / 3}

Portanto,


if ( x > y )
    {x > 1} y = 2 * x + 1;
else
    {x > 4 / 3} y = 3 * x - 1;

{ y > 3 }
```

```
Para respeitar as duas condições, a pré-condição mais fraca é {x > 4 / 3}.
Então,

{ x > 4 / 3 }
if ( x > y )
    y = 2 * x + 1;
else
    y = 3 * x - 1;

{ y > 3 }
```


