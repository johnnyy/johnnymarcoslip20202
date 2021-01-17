# Atividade 08 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Matrícula: 385161
## Data: 20/01/2021

### Questão 01: 

#### padrão:
```
switch(expr1){
    case expr2:
        block_expr1;
        break;
    case expr3:
        block_expr2;
        break;
    default :
        block_expr3;
        break;
}
```

### Questão 01:

#### Defininção de semântica operacional:
```
        if expr1 == expr2 goto COND1
        if expr1 == expr3 goto COND2
COND1:
        block_expr1;
        goto OUT
COND2:
        block_expr2;
        goto OUT
DEFAULT:        
        block_expr3;
OUT:

```


### Questão 02:

#### Defininção de semântica denotacional:

```       
M_switch( switch expr1 case expr2 do block_expr1
                       case expr3 do block_expr2
                       case default do block_expr3 , s ) delta =
                       
            if M_e( expr1 ) == undef OR
               M_e( expr2 ) == undef OR
               M_e( expr3 ) == undef
                return error
            
            if M_b( expr1 == expr2, s ) == undef
                return error
            
            else if M_b( expr1 == expr2, s ) == TRUE 
                M_sl( block_expr1, s )
            
            else if M_b( expr1 == expr3, s ) == undef
                return error
            
            else if M_b( expr1 == expr3, s ) == TRUE 
                M_sl( block_expr2, s )
                
            else 
                M_sl( block_expr3, s )                    
```    
