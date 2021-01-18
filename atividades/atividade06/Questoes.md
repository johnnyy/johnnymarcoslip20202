# Atividade 06 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Matrícula: 385161
## Data: 13/01/2021
## Correção: 1,5
### Questão 01: 

Gramática

```
<LEXP> -> <ATOMO> | <LISTA>
<ATOMO> -> numero | identificador
<LISTA> -> ( <LEXP-SEQ> )
<LEXP-SEQ> -> <LEXP-SEQ> <LEXP> | <LEXP>
```

Notação EBNF

```
<LEXP> -> <ATOMO> | <LISTA>
<ATOMO> -> numero | identificador
<LISTA> -> ( <LEXP-SEQ> )
<LEXP-SEQ> -> <LEXP> { <LEXP> }
```
