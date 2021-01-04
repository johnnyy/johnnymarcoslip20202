# Atividade 03 de Linguagens de Programação
# Correção: 1,5 pontos.
## Nome: Johnny Marcos Silva Soares
## Data: 23/12/2020

### Questão 01: 0,5 Pontos

###### Problema 15:


```
<program> -> begin <stmt_list> end
<stmt_list> -> <stmt> {; <stmt>}
<stmt> -> <var> = <expression>
<var> -> A | B | C
<expression> -> <var> [(+ | -) <var>]
```


###### Problema 16:

```
<assign> -> <id> = <expr>
<id> -> A | B | C
<expr> -> ( (<expr>) | <id> )  { (+ | *)  ( (<expr>) | <id> )}

```
**Correção**: Fiquei com a impressão que aqui você força a _\<expr\>_ sempre aparecer com parênteses. Talvez para diferenciar, colocar os parênteses símbolos entre aspas ('('). 

### Questão 02: 1,0 Ponto.

###### Problema 20:
```
1. Regra sintática: <assign> -> <id> = <expr>[1]
   Regra semântica: <expr>[1].expected_type <- <id>.actual_type

2. Regra sintática: <id> -> A | B | C
   Regra semântica: <id>.actual_type <- look-up(<id>.string)

3. Regra sintática: <expr>[2] -> <id> + <expr>[3]
                            | <id> * <expr>[3]
   Regra semântica: <expr>[2].actual_type <-
                         if (<id>.actual_type = int) and
                                (<expr>[3].actual_type = int)
                            then int
                         else real
                         end if
   Predicado: <expr>[2].actual_type == <expr>[1].expected_type

4. Regra sintática: <expr>[2] -> (<expr>[3])
   Regra semântica: <expr>[2].actual_type <- 
                         if (<expr>[3].actual_type = int) and
                                    (<expr>[1].expected_type = int)
                                 then int
                              else real
                              end if   
   Predicado: <expr>[2].actual_type == <expr>[1].expected_type      
   
5. Regra sintática: <expr>[2] -> <id> 
   Regra semântica: <expr>[2].actual_type <- 
                          if (<id>.actual_type = int) and
                                (<expr>[1].expected_type = int)
                             then int
                          else real
                          end if  
   Predicado: <expr>[2].actual_type == <expr>[1].expected_type        

```
