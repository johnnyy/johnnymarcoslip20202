# Exercício 04 de Linguagens de Programação
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
                if M_sl( L, s ) == undef
                    return error
                if M_b( B, s ) == undef
                    return error
                else if M_b( B, s ) == TRUE
                    M_doWhile( do L while B, M_sl( B, s ) )
                else
                    return M_sl( B, s )
                
```     




