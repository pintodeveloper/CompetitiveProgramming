letters = input()
clean = letters.replace("{","").replace("}","").replace(",","").replace(" ","")

listLetters = set(clean)

print(len(listLetters))