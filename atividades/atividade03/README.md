# Atividade 03 de Linguagens de Programação
## Nome: Johnny Marcos Silva Soares
## Data: 16/12/2020

### Questão 01:

Gramática do Exercício:
```

<assign> -> <id> = <expr>
<id> -> A | B | C
<expr> -> <expr> + <term>
    | <term>
<term> -> <term> * <factor>
    | <factor>
<factor> -> (<expr>)
    | <id>
    
```

#### 1. A = (A + B) * C

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <term>
=> A = <term> * <factor>
=> A = <factor> * <factor>
=> A = (<expr>) * <factor>
=> A = (<expr> + <term>) * <factor>
=> A = (<term> + <term>) * <factor>
=> A = (<factor> + <term>) * <factor>
=> A = (<id> + <term>) * <factor>
=> A = (A + <term>) * <factor>
=> A = (A + <factor) * <factor>
=> A = (A + <id>) * <factor>
=> A = (A + B) * <factor>
=> A = (A + B) * <id>
=> A = (A + B) * C
```

Árvore:

![questao011](questao011.png)





#### 2. A = B + C + A

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <expr> + <term>
=> A = <expr> + <term> + <term>
=> A = <term> + <term> + <term>
=> A = <factor> + <term> + <term>
=> A = <id> + <term> + <term>
=> A = B + <term> + <term>
=> A = B + <factor> + <term>
=> A = B + <id> + <term>
=> A = B + C + <term>
=> A = B + C + <factor>
=> A = B + C + <id>
=> A = B + C + A
```

Árvore:

![questao012](questao012.png)





#### 3. A = A + (B + C)

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <expr> + <term>
=> A = <term> + <term>
=> A = <factor> + <term>
=> A = <id> + <term>
=> A = A + <term>
=> A = A + <factor>
=> A = A + (<expr>)
=> A = A + (<expr> + <term>)
=> A = A + (<term> + <term>)
=> A = A + (<factor> + <term>)
=> A = A + (<id> + <term>)
=> A = A + (B + <term>)
=> A = A + (B + <factor>)
=> A = A + (B + <id>)
=> A = A + (B + C)
```

Árvore:

![questao013](questao013.png)


#### 4. A = B * (C * (A + B))

Derivação:
```
<assign> => <id> = <expr>
=> A = <expr>
=> A = <term>
=> A = <term> * <factor>
=> A = <factor> * <factor>
=> A = <id> * <factor>
=> A = B * <factor>
=> A = B * (<expr>)
=> A = B * (<term>)
=> A = B * (<term> * <factor>)
=> A = B * (<factor> * <factor>)
=> A = B * (<id> * <factor>)
=> A = B * (C * <factor>)
=> A = B * (C * (<expr>))
=> A = B * (C * (<expr> + <term>))
=> A = B * (C * (<term> + <term>))
=> A = B * (C * (<factor> + <term>))
=> A = B * (C * (<id> + <term>))
=> A = B * (C * (A + <term>))
=> A = B * (C * (A + <factor>))
=> A = B * (C * (A + <id>))
=> A = B * (C * (A + B))
```

Árvore:

![questao014](questao014.png)


### Questão 2

#### Escreva uma descrição BNF para uma sentença switch em C.
```
<switch_stmt> -> switch (<var>){
                          <case_stmt>
                          }
                          
<case_stmt> -> case (<const>): <stmt> break; <case_stmt>
             | case (<const>): <stmt> break;
             | default: <stmt> break;
```