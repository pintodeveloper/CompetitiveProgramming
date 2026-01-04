numberProblem = int(input())
write = 0

for i in range(numberProblem):
    count = 0
    
    petya,vasya,tonya = map(int, input().split())
    
    if petya == 1: count+=1
    if vasya == 1: count+=1
    if tonya == 1: count+=1

    if(count > 1): write+=1

print(write)