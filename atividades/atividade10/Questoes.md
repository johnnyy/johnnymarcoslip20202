# Atividade 10 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 03/02/2021


### Questão 01:

programa:
```
{n > 0}
count = n;
sum = 0;
while count < > 0 do
   S1 sum = sum + count;
   S2 count = count - 1;
end
{sum = 1 + 2 + ... + n}
```


 execução | count | sum
---- |----- | -------
S1 |n| 0 + n
S2 |n - 1 | n
S1 | n - 1|  n + (n - 1)
S2 | n - 2|  n + (n - 1)
S1 | n - 2|  n + (n - 1) + (n - 2)

Portanto,

```
I = {sum = (count + 1) + (count + 2) + ... + (n - 1) + n
    AND (count >= 0)}
    
Testando S2:
    count = count - 1;    {(sum = (count +1) + (count + 2) + ... + (n - 1) + n) AND (count >= 0)}
    
    P = {(sum = count + (count + 1) + ... + n ) AND (count >= 1)}
    
Testando S1:
    sum = sum + count;   { (sum = count + (count + 1) + ... + n) AND (count >=1)}
    P' = {sum = (count +1) + ... + n) AND (count >=1)}
   
Portanto,
P' -> I
{I ^ B} S1; S2; {I}

Como count >=1 e n > 0, então, está provado.
```

### Questão 02:

