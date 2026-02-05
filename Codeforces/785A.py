n = int(input())

figures = list()

for i in range(n):
    figures.append(input())


output = 0



for i in figures:
    if(i == "Tetrahedron"):
        output += 4
    
    if(i == "Cube"):
        output += 6

    if(i == "Octahedron"):
        output += 8
    
    if(i == "Dodecahedron"):
        output += 12
    
    if(i == "Icosahedron"):
        output += 20

print(output)