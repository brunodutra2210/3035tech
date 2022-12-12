palavra=str(input())
palavra=palavra.lower()
for p in palavra:
    for letra in p:
        if letra in 'aeiou':
            print(letra)