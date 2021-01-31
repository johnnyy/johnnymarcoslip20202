LETTER = 0
DIGIT = 1
UNKNOWN = 99
INT_LIT = 10
IDENT = 11
ASSIGN_OP = 20
ADD_OP = 21
SUB_OP = 22
MULT_OP = 23
DIV_OP = 24
LEFT_PAREN = 25
RIGHT_PAREN = 26
EOF=-1


class TextData:
    def __init__(self, text):
        self.nextChar = ''
        self.charClass= ''
        self.text = text.decode("utf-8")
        self.list_char = list(self.text)
        self.pos = 0
        self.lexLen = 0
        self.lexeme = ''
        self.token = 0
        self.nextToken = 0

    def addChar(self):
        if self.lexLen <= 98:
            if self.lexLen == 0:
                self.lexeme = self.nextChar
            else:
                self.lexeme = self.lexeme + self.nextChar
            self.lexLen += 1


        else:
            print("Error - lexeme is too long")

    def getChar(self):
        if len(self.list_char) > self.pos:
            self.nextChar = self.list_char[self.pos]
            self.pos += 1
            if self.nextChar.isalpha():
                self.charClass = LETTER
            elif self.nextChar.isdigit():
                self.charClass = DIGIT
            else:
                self.charClass = UNKNOWN

        else:
            self.charClass = EOF
            self.nextChar = 'EOF'

    def getNonBlanck(self):
        while self.nextChar.isspace():
            self.getChar()


def lookup(ch):
    if ch == '(':
        textData.addChar()
        textData.nextToken = LEFT_PAREN
    elif ch == ')':
        textData.addChar()
        textData.nextToken = RIGHT_PAREN
    elif ch == '+':
        textData.addChar()
        textData.nextToken = ADD_OP
    elif ch == '-':
        textData.addChar()
        textData.nextToken = SUB_OP
    elif ch == '*':
        textData.addChar()
        textData.nextToken = MULT_OP
    elif ch == '/':
        textData.addChar()
        textData.nextToken = DIV_OP
    else:
        textData.addChar()
        textData.nextToken = EOF

def lex():
    textData.lexLen = 0
    textData.getNonBlanck()
    if textData.charClass == LETTER:
        textData.addChar()
        textData.getChar()
        while textData.charClass == LETTER or textData.charClass == DIGIT:
            textData.addChar()
            textData.getChar()
        textData.nextToken = IDENT

    elif textData.charClass == DIGIT:
        textData.addChar()
        textData.getChar()
        while textData.charClass == DIGIT:
            textData.addChar()
            textData.getChar()
        textData.nextToken = INT_LIT

    elif textData.charClass == UNKNOWN:
        lookup(textData.nextChar)
        textData.getChar()
    elif textData.charClass == EOF:
        textData.nextToken = EOF
        textData.lexeme = 'EOF'
    print("Next token is: {}, Next lexeme is {}".format(textData.nextToken, textData.lexeme))


file = open("front.in", 'rb')
if file is None:
    print("ERROR - cannot open front.in")

else:
    textData = TextData(file.read())
    textData.getChar()
    while True:
        lex()
        if textData.nextToken == EOF:
            break
