number = int(input())
listX = []

for i in range(number):
    n = input()
    listX.append(n)
    
ouput = 0
for i in listX:
    if("++" in i):
        ouput+=1
    if("--" in i):
        ouput-=1
print(ouput)