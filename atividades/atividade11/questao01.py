# Correção: 1,0

#expr
# <expr> -> <term> {(+ | -) <term>}
def expr():
    term();

    while nextToken == ADD_OP or nextToken == SUB_OP:
        lex()
        term()

    print("Exit <expr>")


#term
#<term> -> <factor> {(* | /) <factor>}

def term():
    print("Enter <term>")
    factor()

    while nextToken == MULT_OP or nextToken == DIV_OP:
        lex()
        factor()
    print("Exit <term>")

#factor
# <factor> -> id | int_constant
def factor():
    print("Enter <factor>")
    if nextToken == IDENT or nextToken == INT_LIT:
        lex()
    else:
        if nextToken == LEFT_PAREN:
            lex()
            expr()
            if nextToken == RIGHT_PAREN:
                lex()
            else:
                error()
        else:
            error()
    print("Exit <factor>")

