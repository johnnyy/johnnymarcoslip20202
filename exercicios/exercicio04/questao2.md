# Exercício 04 de Linguagens de Programação
### Correção: OK. 1,0 Ponto.
## Nome: Johnny Marcos Silva Soares
## Data: 13/01/2021



### Questão 02:


#### padrão:
```
do {
   expr1;
} while (expr3) 
```


exemplo do do-while:



#### Defininção de semântica denotacional:
```
M_doWhile (do L while B, s) delta = 
                if M_se( L, s ) == undef
                    return error
                if M_b( B, s ) == undef
                    return error
                else if M_b( B, s ) == TRUE
                    M_doWhile( do L while B, s)
                else
                    return
                
```     




