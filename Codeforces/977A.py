number, divition = map(int, input().split())


while divition != 0:
    if number % 10 == 0: number /= 10
    else: number -= 1
    
    
    divition -= 1
    
print(round(number))