texto = input("Digite uma frase:")

text_out = ''
for t in range(len(texto) - 1, -1, -1):
    text_out = text_out + texto[t]

print(text_out)

